#!/bin/bash
set -ev

j2objc_version=1.3.1
sha1_checksum=a62807929c2583a03cc73d57ce67fc5730cf24b7

echo "fetching j2objc dist"
echo "fetching j2objc"
  for i in {1..5}
    do
        curl --range 0-199999999 -o j2objc-${j2objc_version}.zip.part1 https://storage.googleapis.com/j2objc_not_for_public/j2objc-${j2objc_version}.zip
        status=$?
        if [ "$status" -eq 0 ]; then
            break
        fi
    done
    for i in {1..5}
    do
        curl --range 200000000-399999999 -o j2objc-${j2objc_version}.zip.part2 https://storage.googleapis.com/j2objc_not_for_public/j2objc-${j2objc_version}.zip
        status=$?
        if [ "$status" -eq 0 ]; then
            break
        fi
    done
    for i in {1..5}
    do
       curl --range 400000000-599999999 -o j2objc-${j2objc_version}.zip.part3 https://storage.googleapis.com/j2objc_not_for_public/j2objc-${j2objc_version}.zip
       status=$?
       if [ "$status" -eq 0 ]; then
          break
       fi
    done
    for i in {1..5}
    do
       curl --range 600000000-799999999 -o j2objc-${j2objc_version}.zip.part4 https://storage.googleapis.com/j2objc_not_for_public/j2objc-${j2objc_version}.zip
       status=$?
       if [ "$status" -eq 0 ]; then
          break
       fi
    done
    for i in {1..5}
    do
       curl --range 800000000-999999999 -o j2objc-${j2objc_version}.zip.part5 https://storage.googleapis.com/j2objc_not_for_public/j2objc-${j2objc_version}.zip
       status=$?
       if [ "$status" -eq 0 ]; then
          break
       fi
    done
    for i in {1..5}
    do
       curl --range 1000000000- -o j2objc-${j2objc_version}.zip.part6 https://storage.googleapis.com/j2objc_not_for_public/j2objc-${j2objc_version}.zip
       status=$?
       if [ "$status" -eq 0 ]; then
          break
       fi
    done

cat j2objc-${j2objc_version}.zip.part? > j2objc-${j2objc_version}.zip
rm j2objc-${j2objc_version}.zip.part?


echo "j2objc-${j2objc_version}.zip" | shasum
unzip -o -q j2objc-${j2objc_version}.zip
mv j2objc-${j2objc_version} Distributive
rm j2objc-${j2objc_version}.zip

echo "Creating framework"
mkdir Frameworks
mkdir Frameworks/j2objc.framework
cp -a Scripts/Template/* Frameworks/j2objc.framework/
cp Distributive/lib/libjre_emul.a Frameworks/j2objc.framework/j2objc
