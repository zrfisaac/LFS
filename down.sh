#!/usr/bin/env bash
set -Eeuo pipefail

# [ zrfisaac ]

# [ about ]
# - author : Isaac Caires Santana
# . - email : zrfisaac@gmail.com
# . - site : zrfisaac.github.io

# [ bash ]

c_config_root="$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" && pwd)"
c_config_download="$c_config_root/download"

fn_dependency_check() {
    local _item
    local -a _item_list=(wget)

    for _item in "${_item_list[@]}"; do
        if ! command -v "$_item" >/dev/null 2>&1; then
            printf '%s\n' "Error: $_item is not installed or is not in PATH." >&2
            return 1
        fi
    done
}

fn_download() {
    local _item
    local -a _item_list=(wget-list wget-list-systemd)

    mkdir -p -- "$c_config_download"

    for _item in "${_item_list[@]}"; do
        printf '%s\n' "# . - download - source : $_item"
        wget \
            --no-clobber \
            --timeout=30 \
            --tries=3 \
            --waitretry=5 \
            --directory-prefix="$c_config_download" \
            --input-file="$c_config_root/$_item"
    done
}

fn_main() {
    printf '%s\n' "# - : ${BASH_SOURCE[0]}"
    printf '%s\n' '# . - dependency - check'
    fn_dependency_check
    printf '%s\n' '# . - action - download'
    fn_download
    printf '%s\n' '# . - end'
}

fn_main "$@"
