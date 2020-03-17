#!/bin/sh

LIBRARY_NAME="J2ObjC"

# J2OBJC_PLATFORMS="ios appletvos macosx maccatalyst"
J2OBJC_PLATFORMS="ios macosx maccatalyst"
FAT_PLATFORMS="ios appletvos"
LIBRARIES="libandroid_util libguava libguavaandroid libjavax_inject libjre_beans libjre_channels libjre_concurrent libjre_core libjre_emul libjre_icu libjre_io libjre_net libjre_security libjre_sql libjre_ssl libjre_time libjre_util libjre_xml libjre_zip libjsr305 libjunit libmockito libprotobuf_runtime libxalan"
FRAMEWORKS="Guava GuavaAndroid JavaxInject JRE JSR305 JUnit Mockito ProtobufRuntime Xalan"
DIST_LIB="dist/lib"
DIST_FRAMEWORKS="dist/frameworks"
TMP="dist/tmp"
XCFRAMEWORK_FOLDER="dist/xcframeworks"

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
        macosx)         echo "$DIST_LIB/macosx" ;;
        maccatalyst)    echo "$DIST_LIB/maccatalyst" ;;
    esac
}

function MatchLibrary() {
    local framework=$1

    case $framework in
        Guava)              echo "libguava" ;;
        GuavaAndroid)       echo "libguavaandroid" ;;
        JavaxInject)        echo "libjavax_inject" ;;
        JRE)                echo "libjre_emul" ;;
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
}

function PackageToFrameworks() {
    local platform=$1
    local arch=$2
    local framework=$3
    local arch_dir="$(ThinInputPath $platform $arch)"
    local include_dir="dist/include/"

    echo "Packaging $framework for platform: $platform, arch: $arch"

    local library="$(MatchLibrary $FRAMEWORK)"

    local output_dir="$(FrameworkPath $platform $arch)"
    mkdir -p "$output_dir"

    local framework_path="$DIST_FRAMEWORKS/$framework.framework"
    cp -R $framework_path $output_dir
    echo "$output_dir"

    cp $arch_dir/$library.a "$output_dir/$framework.framework/Versions/A/$framework"
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
                PackageToFrameworks $J2OBJC_PLATFORM $arch $FRAMEWORK

                local lib_dir="$(FrameworkPath $J2OBJC_PLATFORM $arch)"
                framework_arguments="$framework_arguments -framework $lib_dir/$FRAMEWORK.framework"
            done
        done

        echo $framework_arguments

        xcodebuild -create-xcframework $framework_arguments \
            -output "$XCFRAMEWORK_FOLDER/$FRAMEWORK.xcframework"
    done
}

CreateThin
CreateXCFramework
