#!/bin/bash
set -ev

GITHUB="api.github.com"
REPO="TacxDev/J2ObjC-Framework"

TOKEN="1e19cb1f137e779edb17f12234b5f9b9fc6495ed"
J2OBJC_VERSION=2.5

FILE="j2objc-${J2OBJC_VERSION}.zip"
PARSER=". | map(select(.tag_name == \"$J2OBJC_VERSION\"))[0].assets | map(select(.name == \"$FILE\"))[0].id"

function gh_find_curl() {
  curl -L -H "Authorization: token $TOKEN" \
       -H "Accept: application/vnd.github.v3.raw" \
       $@
}

function gh_download_curl() {
  curl -H "Authorization: token $TOKEN" \
       -H "Accept: application/octet-stream" \
       $@
}

asset_id=`gh_find_curl -s $GITHUB/repos/$REPO/releases | jq "$PARSER"`

if [ -z "$asset_id" ]; then
  >&2 echo "ERROR: version not found $J2OBJC_VERSION"
  exit 1
fi

echo "Asset found for file: $FILE, assetID=$asset_id"

link="$GITHUB/repos/$REPO/releases/assets/$asset_id"

echo "fetching j2objc dist"
echo "fetching j2objc"
 for i in {1..5}
    do
        gh_download_curl --range 0-99999999 -o j2objc-${J2OBJC_VERSION}.zip.part01 -L  ${link}
        status=$?
        if [ "$status" -eq 0 ]; then
            break
        fi
    done
    for i in {1..5}
    do
        gh_download_curl --range 100000000-199999999 -o j2objc-${J2OBJC_VERSION}.zip.part02 -L ${link}
        if [ "$status" -eq 0 ]; then
            break
        fi
    done
    for i in {1..5}
    do
       gh_download_curl --range 200000000-299999999 -o j2objc-${J2OBJC_VERSION}.zip.part03 -L ${link}
       status=$?
       if [ "$status" -eq 0 ]; then
          break
       fi
    done
    for i in {1..5}
    do
       gh_download_curl --range 300000000-399999999 -o j2objc-${J2OBJC_VERSION}.zip.part04 -L ${link}
       status=$?
       if [ "$status" -eq 0 ]; then
          break
       fi
    done
    
cat j2objc-${J2OBJC_VERSION}.zip.part* > j2objc-${J2OBJC_VERSION}.zip
rm j2objc-${J2OBJC_VERSION}.zip.part*


echo "j2objc-${J2OBJC_VERSION}.zip" | shasum
unzip -o -q j2objc-${J2OBJC_VERSION}.zip
rm j2objc-${J2OBJC_VERSION}.zip
