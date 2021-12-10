#!/bin/bash
GITHUB="https://github.com"
REPO="TacxDev/J2ObjC-Framework"
J2OBJC_VERSION=2.8.1

FILE="j2objc-${J2OBJC_VERSION}.zip"
PART_SIZE="$(( 100 * 1024 * 1024 ))"
NUMBER_OF_PARTS=7
NUMBER_OF_ATTEMPTS=5

link="${GITHUB}/${REPO}/releases/download/${J2OBJC_VERSION}/${FILE}"

echo "fetching j2objc dist"
echo "fetching j2objc"

function perform_download {
    part_name_format="${FILE}.part%02d"

    for (( part=1; part<=$NUMBER_OF_PARTS; part++ )); do
        for (( attempt=1; attempt<=$NUMBER_OF_ATTEMPTS; attempt++ )); do
            start="$(( ($part - 1) * $PART_SIZE ))"
            end="$(( $part * $PART_SIZE - 1 ))"
            part_name=$(printf "$part_name_format" $part)

            echo "part name: ${part_name}"

            curl --range $start-$end -o ${part_name} -L ${link}
            status=$?
            if [ "$status" -eq 0 ]; then
                break
            fi
       done
    done
}

perform_download

cat ${FILE}.part* > ${FILE}
rm ${FILE}.part*

echo "j2objc-${J2OBJC_VERSION}.zip" | shasum
unzip -o -q j2objc-${J2OBJC_VERSION}.zip
rm j2objc-${J2OBJC_VERSION}.zip
