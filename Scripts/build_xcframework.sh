#!/bin/sh

LIBRARY_NAME="J2ObjC"

# J2OBJC_PLATFORMS="ios appletvos macosx maccatalyst"
J2OBJC_PLATFORMS="ios macosx maccatalyst"
FAT_PLATFORMS="ios appletvos"
THIN_PLATFORMS="macosx maccatalyst"
LIBRARIES="libandroid_util libguava libguavaandroid libjavax_inject libjre_beans libjre_channels libjre_concurrent libjre_core libjre_emul libjre_icu libjre_io libjre_net libjre_security libjre_sql libjre_ssl libjre_time libjre_util libjre_xml libjre_zip libjsr305 libjunit libmockito libprotobuf_runtime libxalan libjson"
FRAMEWORKS="Guava GuavaAndroid JavaxInject JRE JSR305 JUnit Mockito ProtobufRuntime Xalan"
DIST_LIB="lib"
DIST_FRAMEWORKS="dist/frameworks"
TMP="dist/tmp"
XCFRAMEWORK_FOLDER="dist/xcframeworks"
LIBRARIES_TO_COMBINE="libjre_ssl libjre_net libjre_emul libjson"
COMBINED_JRE="libjre_emul_combined"

function Architectures() {
    local platform=$1

    case $platform in
        ios)            echo "arm64 x86_64" ;;
        appletvos)      echo "arm64 x86_64" ;;
        macosx)         echo "x86_64" ;;
        maccatalyst)    echo "x86_64" ;;
    esac
}

function InputPath() {
    local platform=$1

    case $platform in
        ios)            echo "$DIST_LIB" ;;
        appletvos)      echo "$DIST_LIB/appletvos" ;;
        macosx)         echo "$DIST_LIB/macosx" ;;
        maccatalyst)    echo "$DIST_LIB/maccatalyst" ;;
    esac
}

function ThinInputPath() {
    local platform=$1
    local arch=$2

    case $platform in
        ios)            echo "$TMP/ios/$arch" ;;
        appletvos)      echo "$TMP/appletvos/$arch" ;;
        macosx)         echo "$TMP/macosx" ;;
        maccatalyst)    echo "$TMP/maccatalyst" ;;
    esac
}

function MatchLibrary() {
    local framework=$1

    case $framework in
        Guava)              echo "libguava" ;;
        GuavaAndroid)       echo "libguavaandroid" ;;
        JavaxInject)        echo "libjavax_inject" ;;
        JRE)                echo "$COMBINED_JRE" ;;
        JSR305)             echo "libjsr305" ;;
        JUnit)              echo "libjunit" ;;
        Mockito)            echo "libmockito" ;;
        ProtobufRuntime)    echo "libprotobuf_runtime" ;;
        Xalan)              echo "libxalan" ;;
    esac
}

function FrameworkPath() {
    local platform=$1
    local arch=$2

    case $platform in
        ios)            echo "$TMP/ios/$arch" ;;
        appletvos)      echo "$TMP/appletvos/$arch" ;;
        macosx)         echo "$TMP/macosx/$arch" ;;
        maccatalyst)    echo "$TMP/maccatalyst/$arch" ;;
    esac
}

function CreateThin() {
    for FAT_PLATFORM in $FAT_PLATFORMS
    do
        local archs="$(Architectures $FAT_PLATFORM)"
        local input_dir="$(InputPath $FAT_PLATFORM)"

        for arch in $archs
        do
            local arch_dir="$(ThinInputPath $FAT_PLATFORM $arch)"
            mkdir -p "$arch_dir"

            for LIBRARY in $LIBRARIES
            do
                lipo $input_dir/$LIBRARY.a -thin $arch -output $arch_dir/$LIBRARY.a
            done
        done
    done

    for THIN_PLATFORM in $THIN_PLATFORMS
    do
        local arch="$(Architectures $THIN_PLATFORM)"
        local input_dir="$(InputPath $THIN_PLATFORM)"

        local arch_dir="$(ThinInputPath $THIN_PLATFORM $arch)"
        mkdir -p "$arch_dir"

        for LIBRARY in $LIBRARIES
        do
            cp $input_dir/$LIBRARY.a $arch_dir/$LIBRARY.a
        done
    done
}

function CombineJRE() {
    for J2OBJC_PLATFORM in $J2OBJC_PLATFORMS
    do
        local archs="$(Architectures $J2OBJC_PLATFORM)"
        local input_dir="$(InputPath $J2OBJC_PLATFORM)"

        for arch in $archs
        do
            local libtool_arguments=""

            for LIBRARY_TO_COMBINE in $LIBRARIES_TO_COMBINE
            do
                local arch_dir="$(ThinInputPath $J2OBJC_PLATFORM $arch)"
                libtool_arguments="$libtool_arguments $arch_dir/$LIBRARY_TO_COMBINE.a"
            done

            libtool -static $libtool_arguments -o $arch_dir/$COMBINED_JRE.a
        done
    done
}

function CreateModuleMap() {
    local framework=$1

    local modulemap="$XCFRAMEWORK_FOLDER/$framework.xcframework/Headers/module.modulemap"

    echo "module" $framework "{" > $modulemap
    echo "  umbrella header" '"'$framework.h'"' >> $modulemap
    echo >> $modulemap
    echo "  export *" >> $modulemap
    echo "  module * { export * }" >> $modulemap
    echo "}" >> $modulemap
}

function CreateXCFramework() {
    rm -rf $XCFRAMEWORK_FOLDER
    mkdir -p $XCFRAMEWORK_FOLDER

    for FRAMEWORK in $FRAMEWORKS
    do
        echo "Creating framework $FRAMEWORK ($J2OBJC_PLATFORMS)"

        local framework_arguments=""

        for J2OBJC_PLATFORM in $J2OBJC_PLATFORMS
        do
            local archs="$(Architectures $J2OBJC_PLATFORM)"

            for arch in $archs
            do
                local arch_dir="$(ThinInputPath $J2OBJC_PLATFORM $arch)"
                local library="$(MatchLibrary $FRAMEWORK)"

                framework_arguments="$framework_arguments -library $arch_dir/$library.a"
            done
        done

        echo $framework_arguments

        xcodebuild -create-xcframework $framework_arguments \
            -output "$XCFRAMEWORK_FOLDER/$FRAMEWORK.xcframework"

        local include_dir="include/"
        cp -R $include_dir "$XCFRAMEWORK_FOLDER/$FRAMEWORK.xcframework/Headers"

        CreateModuleMap $FRAMEWORK

    done
}

CreateThin
CombineJRE
CreateXCFramework
