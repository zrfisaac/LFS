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

fn_download_check() {
    local _item
    local _url
    local _name
    local _file
    local v_missing=0
    local -A v_item_seen=()
    local -a _item_list=(wget-list wget-list-systemd)

    for _item in "${_item_list[@]}"; do
        _file="$c_config_root/$_item"

        if [[ ! -f "$_file" ]]; then
            printf '%s\n' "Error: list does not exist: $_file" >&2
            return 1
        fi

        while IFS= read -r _url || [[ -n "$_url" ]]; do
            [[ -z "$_url" || "$_url" == \#* ]] && continue
            _name="${_url##*/}"

            [[ -n "${v_item_seen[$_name]:-}" ]] && continue
            v_item_seen["$_name"]=1

            if [[ ! -f "$c_config_download/$_name" ]]; then
                printf '%s\n' "# . - check - missing : $_url"
                ((v_missing += 1))
            fi
        done < "$_file"
    done

    printf '%s\n' "# . - check - missing - total : $v_missing"

    if ((v_missing > 0)); then
        return 1
    fi

    return "$v_missing"
}

fn_main() {
    printf '%s\n' "# - : ${BASH_SOURCE[0]}"

    if [[ ! -d "$c_config_download" ]]; then
        printf '%s\n' "Error: download directory does not exist: $c_config_download" >&2
        return 1
    fi

    printf '%s\n' '# . - action - check - download'
    fn_download_check
    printf '%s\n' '# . - end'
}

fn_main "$@"
