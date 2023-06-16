#!/bin/bash
GITHUB="https://github.com"
REPO="TacxDev/J2ObjC-Framework"
J2OBJC_VERSION=140623

FILES=("JRE" "JSON" "JSR305" "ProtobufRuntime")
PART_SIZE="$(( 100 * 1024 * 1024 ))"
NUMBER_OF_PARTS=3
NUMBER_OF_ATTEMPTS=5

function perform_download {
    LINK="${GITHUB}/${REPO}/releases/download/${J2OBJC_VERSION}/$1"
    echo "Fetching xcframework $LINK"
    part_name_format="${1}.part%02d"

    for (( part=1; part<=$NUMBER_OF_PARTS; part++ )); do
        for (( attempt=1; attempt<=$NUMBER_OF_ATTEMPTS; attempt++ )); do
            start="$(( ($part - 1) * $PART_SIZE ))"
            end="$(( $part * $PART_SIZE - 1 ))"
            part_name=$(printf "$part_name_format" $part)

            echo "part name: ${part_name}"

            curl --range $start-$end -o ${part_name} -L $LINK
            status=$?
            if [ "$status" -eq 0 ]; then
                break
            fi
       done
    done
}

mkdir Frameworks

for f in ${FILES[@]}; do
    ARTIFACT=${f}.xcframework.zip
    perform_download $ARTIFACT
    cat ${ARTIFACT}.part* > ${ARTIFACT}
    rm ${ARTIFACT}.part*
    unzip -o -q $ARTIFACT -d Frameworks
    rm $ARTIFACT
done

