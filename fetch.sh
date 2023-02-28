#!/usr/bin/env bash

set -e

fetch() {
    curl -s \
        https://raw.githubusercontent.com/chromium/chromium/main/tools/clang/scripts/update.py \
        | python3 - \
          --output-dir=$(pwd)/clang
    wget -c \
        https://commondatastorage.googleapis.com/chromium-browser-clang/Linux_x64/llvmobjdump-$(cat clang/cr_build_revision).tar.xz \
        -O - | tar -xJv -C clang
}

stage() {
    cp -rfv clang/* . && rm -fr clang
    git add . && git commit -m "Import $(cat cr_build_revision)"
}

fetch
stage
