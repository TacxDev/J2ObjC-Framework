#!/bin/sh

LIBRARY_NAME="J2ObjC"

# J2OBJC_PLATFORMS="ios appletvos macosx maccatalyst"
J2OBJC_PLATFORMS="ios macosx maccatalyst"
POSSIBLE_LIBRARIES="libjre_emul libjre_beans libjre_channels libjre_concurrent libjre_core libjre_emul libjre_icu libjre_io libjre_net libjre_security libjre_sql libjre_ssl libjre_time libjre_util libjre_xml libjre_zip"
LIBRARIES="libjre_ssl libjre_net libjre_emul"
FRAMEWORK="JRE"
DIST_LIB="dist/lib"
DIST_FRAMEWORKS="dist/frameworks"
DIST_FRAMEWORK="dist/frameworks/$FRAMEWORK.framework/Versions/A"
TMP="dist/tmp"
INPUT_PATH="$DIST_LIB"
ARCHS="arm64 x86_64"
COMBINED_NAME="combined"

function CreateThin() {
    for ARCH in $ARCHS
    do
        local arch_dir="$TMP/$ARCH"
        mkdir -p "$arch_dir"

        for LIBRARY in $LIBRARIES
        do
            lipo $DIST_LIB/$LIBRARY.a -thin $ARCH -output $arch_dir/$LIBRARY.a
        done
    done
}

function CombineThin() {
    for ARCH in $ARCHS
    do
        local libtool_arguments=""

        for LIBRARY in $LIBRARIES
        do
            local arch_dir="$TMP/$ARCH"
            libtool_arguments="$libtool_arguments $arch_dir/$LIBRARY.a"
        done

        libtool -static $libtool_arguments -o $arch_dir/$COMBINED_NAME.a
    done
}

function InjectExtras() {
    local lipo_arguments=""

    for ARCH in $ARCHS
    do
        local arch_dir="$TMP/$ARCH"
        lipo_arguments="$lipo_arguments $arch_dir/$COMBINED_NAME.a"
    done

    lipo -create $lipo_arguments -output $DIST_FRAMEWORK/$FRAMEWORK
}

CreateThin
CombineThin
InjectExtras
