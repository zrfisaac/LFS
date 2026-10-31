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
    local -a _item_list=(md5sum)

    for _item in "${_item_list[@]}"; do
        if ! command -v "$_item" >/dev/null 2>&1; then
            printf '%s\n' "Error: $_item is not installed or is not in PATH." >&2
            return 1
        fi
    done
}

fn_sum_check() {
    cd -- "$c_config_download"
    md5sum --check "$c_config_root/md5sums"
}

fn_main() {
    printf '%s\n' "# - : ${BASH_SOURCE[0]}"
    printf '%s\n' '# . - dependency - check'
    fn_dependency_check

    if [[ ! -d "$c_config_download" ]]; then
        printf '%s\n' "Error: download directory does not exist: $c_config_download" >&2
        return 1
    fi

    printf '%s\n' '# . - action - checksum'
    fn_sum_check
    printf '%s\n' '# . - end'
}

fn_main "$@"
