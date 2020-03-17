#!/bin/sh

LIBRARY_NAME="J2ObjC"

FRAMEWORK_FILE="$LIBRARY_NAME.framework"
XCFRAMEWORK_FILE="$LIBRARY_NAME.xcframework"

J2OBJC_PLATFORMS="ios appletvos macosx maccatalyst"
FAT_PLATFORMS="ios appletvos"
LIBRARIES="libandroid_util libguava libguavaandroid libjavax_inject libjre_beans libjre_channels libjre_concurrent libjre_core libjre_emul libjre_icu libjre_io libjre_net libjre_security libjre_sql libjre_ssl libjre_time libjre_util libjre_xml libjre_zip libjsr305 libjunit libmockito libprotobuf_runtime libxalan"
DIST_LIB="dist/lib"
TMP="dist/tmp"

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
    local arch_dir="$(ThinInputPath $platform $arch)"
    local include_dir="dist/include/"

    echo "Packaging library for platform: $platform, arch: $arch"

    local libraries=""

    for LIBRARY in $LIBRARIES
    do
        libraries="$libraries $arch_dir/$LIBRARY.a"
    done

    local output_dir="$(FrameworkPath $platform $arch)"
    mkdir -p "$output_dir"
    echo "$output_dir"

    local framework_headers="$output_dir/$FRAMEWORK_FILE/Headers"
    mkdir -p "$framework_headers"

    cp -r $include_dir $framework_headers

    libtool -static -arch_only $arch \
        -o $output_dir/$FRAMEWORK_FILE/$LIBRARY_NAME $libraries
}

function CreateXCFramework() {
    rm -rf $XCFRAMEWORK_FILE

    echo "Creating framework: $J2OBJC_PLATFORMS"

    local framework_arguments=""

    for J2OBJC_PLATFORM in $J2OBJC_PLATFORMS
    do
        local archs="$(Architectures $J2OBJC_PLATFORM)"

        for arch in $archs
        do
            PackageToFrameworks $J2OBJC_PLATFORM $arch

            local lib_dir="$(FrameworkPath $J2OBJC_PLATFORM $arch)"
            framework_arguments="$framework_arguments -framework $lib_dir/$FRAMEWORK_FILE"
        done
    done

    echo $framework_arguments

    xcodebuild -create-xcframework $framework_arguments \
        -output "$XCFRAMEWORK_FILE"
}

CreateThin
CreateXCFramework
