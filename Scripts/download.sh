#!/bin/bash
set -ev

j2objc_version=2.2.1
link=https://github.com/TacxDev/j2objc/releases/download/${j2objc_version}/j2objc-${j2objc_version}.zip
sha1_checksum=a62807929c2583a03cc73d57ce67fc5730cf24b7
echo "fetching j2objc dist"
echo "fetching j2objc"
 for i in {1..5}
    do
        curl --range 0-99999999 -o j2objc-${j2objc_version}.zip.part01 -L  ${link}
        status=$?
        if [ "$status" -eq 0 ]; then
            break
        fi
    done
    for i in {1..5}
    do
        curl --range 100000000-199999999 -o j2objc-${j2objc_version}.zip.part02 -L ${link}
        if [ "$status" -eq 0 ]; then
            break
        fi
    done
    for i in {1..5}
    do
       curl --range 200000000-299999999 -o j2objc-${j2objc_version}.zip.part03 -L ${link}
       status=$?
       if [ "$status" -eq 0 ]; then
          break
       fi
    done
    for i in {1..5}
    do
       curl --range 300000000-399999999 -o j2objc-${j2objc_version}.zip.part04 -L ${link}
       status=$?
       if [ "$status" -eq 0 ]; then
          break
       fi
    done
    
cat j2objc-${j2objc_version}.zip.part* > j2objc-${j2objc_version}.zip
rm j2objc-${j2objc_version}.zip.part*


echo "j2objc-${j2objc_version}.zip" | shasum
unzip -o -q j2objc-${j2objc_version}.zip
mv j2objc-${j2objc_version} .
rm j2objc-${j2objc_version}.zip
