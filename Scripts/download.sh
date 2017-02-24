#!/bin/bash
set -ev

j2objc_version=1.3.1
sha1_checksum=a62807929c2583a03cc73d57ce67fc5730cf24b7

echo "fetching j2objc dist"
curl -OL https://storage.googleapis.com/j2objc_not_for_public/j2objc-${j2objc_version}.zip
echo "j2objc-${j2objc_version}.zip" | shasum
unzip -o -q j2objc-${j2objc_version}.zip
mv j2objc-${j2objc_version} Distributive
rm j2objc-${j2objc_version}.zip

echo "Creating framework"
mkdir Frameworks
mkdir Frameworks/j2objc.framework
cp -a Scripts/Template/* Frameworks/j2objc.framework/
cp Distributive/lib/libjre_emul.a Frameworks/j2objc.framework/j2objc
