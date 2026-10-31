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
c_config_package="$c_config_root/package"
c_config_state="$c_config_package/.state"

fn_dependency_check() {
    local _item
    local -a _item_list=(tar patch python3 cp cmp mv mkdir)

    for _item in "${_item_list[@]}"; do
        if ! command -v "$_item" >/dev/null 2>&1; then
            printf '%s\n' "Error: $_item is not installed or is not in PATH." >&2
            return 1
        fi
    done
}

fn_extract_tar() {
    local _archive="$1"
    local _parent="$2"
    local _expected="$3"
    local _state_name="$4"
    local _strip="${5:-0}"
    local _state_file="$c_config_state/$_state_name.extract"

    if [[ -f "$_state_file" ]]; then
        return 0
    fi

    if [[ -e "$_expected" ]]; then
        printf '%s\n' "Error: extraction target exists without state marker: $_expected" >&2
        return 1
    fi

    mkdir -p -- "$_parent"
    printf '%s\n' "# . - extract - archive : ${_archive##*/}"

    if (( _strip > 0 )); then
        tar --no-same-owner --no-same-permissions \
            --strip-components="$_strip" \
            -xf "$_archive" -C "$_parent"
    else
        tar --no-same-owner --no-same-permissions \
            -xf "$_archive" -C "$_parent"
    fi

    if [[ ! -e "$_expected" ]]; then
        printf '%s\n' "Error: expected extraction output was not created: $_expected" >&2
        return 1
    fi

    : > "$_state_file"
}

fn_extract_zip() {
    local _archive="$1"
    local _parent="$2"
    local _expected="$3"
    local _state_name="$4"
    local _state_file="$c_config_state/$_state_name.extract"

    if [[ -f "$_state_file" ]]; then
        return 0
    fi

    if [[ -e "$_expected" ]]; then
        printf '%s\n' "Error: extraction target exists without state marker: $_expected" >&2
        return 1
    fi

    mkdir -p -- "$_parent"
    printf '%s\n' "# . - extract - archive : ${_archive##*/}"
    python3 -m zipfile -e "$_archive" "$_parent"

    if [[ ! -e "$_expected" ]]; then
        printf '%s\n' "Error: expected extraction output was not created: $_expected" >&2
        return 1
    fi

    : > "$_state_file"
}

fn_extract_source() {
    local _name="$1"
    local _archive="$c_config_download/$_name"
    local _parent
    local _stem="${_name%%.tar.*}"
    local _expected
    local _state_name

    case "$_name" in
        binutils-2.47.tar.*)
            for _parent in "$c_config_package/chapter05" "$c_config_package/chapter06"; do
                _expected="$_parent/$_stem"
                _state_name="${_parent##*/}_$_name"
                fn_extract_tar "$_archive" "$_parent" "$_expected" "$_state_name"
            done
            ;;
        gcc-16.2.0.tar.*)
            for _parent in "$c_config_package/chapter05" "$c_config_package/chapter06"; do
                _expected="$_parent/$_stem"
                _state_name="${_parent##*/}_$_name"
                fn_extract_tar "$_archive" "$_parent" "$_expected" "$_state_name"
            done
            ;;
        glibc-2.44.tar.*)
            for _parent in "$c_config_package/chapter05" "$c_config_package/chapter08"; do
                _expected="$_parent/$_stem"
                _state_name="${_parent##*/}_$_name"
                fn_extract_tar "$_archive" "$_parent" "$_expected" "$_state_name"
            done
            ;;
        linux-7.1.8.tar.*)
            for _parent in "$c_config_package/chapter05" "$c_config_package/chapter10"; do
                _expected="$_parent/$_stem"
                _state_name="${_parent##*/}_$_name"
                fn_extract_tar "$_archive" "$_parent" "$_expected" "$_state_name"
            done
            ;;
        tcl8.6.18-src.tar.*)
            _parent="$c_config_package/chapter08"
            fn_extract_tar "$_archive" "$_parent" "$_parent/tcl8.6.18" "chapter08_$_name"
            ;;
        tcl8.6.18-html.tar.*)
            _parent="$c_config_package/chapter08/tcl-docs"
            fn_extract_tar "$_archive" "$_parent" "$_parent/html" "tcl_docs_$_name" 1
            ;;
        python-3.14.7-docs-html.tar.*)
            _parent="$c_config_package/chapter08/python-docs"
            fn_extract_tar "$_archive" "$_parent" "$_parent/_sources" "python_docs_$_name" 1
            ;;
        systemd-man-pages-261.2.tar.*)
            _parent="$c_config_package/chapter08/systemd-man-pages"
            fn_extract_tar "$_archive" "$_parent" "$_parent/man8" "systemd_man_pages_$_name" 1
            ;;
        tzdata2026c.tar.*)
            _parent="$c_config_package/chapter08/tzdata2026c"
            fn_extract_tar "$_archive" "$_parent" "$_parent/zone.tab" "chapter08_$_name"
            ;;
        sysvinit-3.14.tar.*|sysklogd-2.7.2.tar.*|udev-lfs-20230818.tar.*|lfs-bootscripts-20250827.tar.*)
            _parent="$c_config_package/optional-sysvinit"
            _expected="$_parent/$_stem"
            _state_name="optional_$_name"
            fn_extract_tar "$_archive" "$_parent" "$_expected" "$_state_name"
            ;;
        *.tar.*)
            _parent="$c_config_package/chapter08"
            _expected="$_parent/$_stem"
            _state_name="chapter08_$_name"
            fn_extract_tar "$_archive" "$_parent" "$_expected" "$_state_name"
            ;;
        sqlite-doc-3530400.zip)
            _parent="$c_config_package/chapter08/sqlite-autoconf-3530400"
            _expected="$_parent/sqlite-doc-3530400"
            fn_extract_zip "$_archive" "$_parent" "$_expected" "sqlite_docs_$_name"
            ;;
        *)
            printf '%s\n' "Error: unsupported archive format: $_name" >&2
            return 1
            ;;
    esac
}

fn_extract_gcc_dependencies() {
    local _stage="$1"
    local _gcc="$_stage/gcc-16.2.0"
    local _item
    local _source
    local _target
    local _state_name
    local -a _item_list=(mpfr-4.2.2 gmp-6.3.0 mpc-1.4.1)

    if [[ ! -d "$_gcc" ]]; then
        return 0
    fi

    for _item in "${_item_list[@]}"; do
        _source="$c_config_download/$_item.tar.xz"
        _state_name="${_stage##*/}_gcc_dependency_$_item"

        case "$_item" in
            gmp-*) _target="$_gcc/gmp" ;;
            mpfr-*) _target="$_gcc/mpfr" ;;
            mpc-*) _target="$_gcc/mpc" ;;
        esac

        if [[ ! -f "$_source" ]]; then
            printf '%s\n' "# . - skip - missing GCC dependency : ${_source##*/}"
            continue
        fi

        if [[ -d "$_target" && -f "$c_config_state/$_state_name.extract" ]]; then
            continue
        fi

        fn_extract_tar "$_source" "$_gcc" "$_gcc/$_item" "$_state_name"
        if [[ -d "$_gcc/$_item" && ! -e "$_target" ]]; then
            mv -- "$_gcc/$_item" "$_target"
        fi
    done
}

fn_prepare_nested_sources() {
    local _item

    for _item in chapter05 chapter06; do
        fn_extract_gcc_dependencies "$c_config_package/$_item"
    done

    local _v_pkgconf="$c_config_package/chapter08/pkgconf-3.0.5"
    local _v_meson="$c_config_download/meson-1.12.0.tar.gz"
    if [[ -d "$_v_pkgconf" && -f "$_v_meson" ]]; then
        fn_extract_tar \
            "$_v_meson" \
            "$_v_pkgconf" \
            "$_v_pkgconf/meson-1.12.0" \
            pkgconf_meson_nested
    fi
}

fn_copy_patches() {
    local _item

    mkdir -p -- "$c_config_package/patches"
    for _item in "$c_config_download"/*.patch; do
        [[ -f "$_item" ]] || continue

        if [[ -e "$c_config_package/patches/${_item##*/}" ]]; then
            if ! cmp -s -- "$_item" "$c_config_package/patches/${_item##*/}"; then
                printf '%s\n' "Error: patch copy differs from downloaded file: ${_item##*/}" >&2
                return 1
            fi
        else
            cp -- "$_item" "$c_config_package/patches/"
        fi
    done
}

fn_apply_patch() {
    local _patch="$c_config_download/$1"
    local _target="$2"
    local _state_name="$3"
    local _state_file="$c_config_state/$_state_name.patch"

    if [[ ! -f "$_patch" || ! -d "$_target" ]]; then
        printf '%s\n' "# . - skip - patch unavailable : ${_patch##*/}"
        return 0
    fi

    if [[ -f "$_state_file" ]]; then
        return 0
    fi

    printf '%s\n' "# . - apply - patch : ${_patch##*/} -> ${_target#"$c_config_package"/}"
    if [[ "${_patch##*/}" == Python-3.14.7-openssl_4-1.patch ]]; then
        # This patch contains sequential diffs that depend on earlier hunks.
        (cd -- "$_target" && patch --batch --forward -Np1 -i "$_patch")
    elif (cd -- "$_target" && patch --dry-run --batch --forward -Np1 -i "$_patch"); then
        (cd -- "$_target" && patch --batch --forward -Np1 -i "$_patch")
    elif (cd -- "$_target" && patch --dry-run --batch --reverse -Np1 -i "$_patch"); then
        printf '%s\n' "# . - patch - already applied : ${_patch##*/}"
    else
        printf '%s\n' "Error: patch does not apply cleanly: ${_patch##*/}" >&2
        return 1
    fi

    : > "$_state_file"
}

fn_apply_patches() {
    local _item
    local -a _item_list=(chapter05 chapter08)

    fn_apply_patch bzip2-1.0.8-install_docs-1.patch \
        "$c_config_package/chapter08/bzip2-1.0.8" bzip2_chapter08
    fn_apply_patch coreutils-9.11-i18n-1.patch \
        "$c_config_package/chapter08/coreutils-9.11" coreutils_chapter08
    fn_apply_patch expect-5.45.4-gcc15-1.patch \
        "$c_config_package/chapter08/expect5.45.4" expect_chapter08
    fn_apply_patch kbd-2.10.0-backspace-1.patch \
        "$c_config_package/chapter08/kbd-2.10.0" kbd_chapter08
    fn_apply_patch Python-3.14.7-openssl_4-1.patch \
        "$c_config_package/chapter08/Python-3.14.7" python_chapter08
    fn_apply_patch tar-1.35-acl_fix-1.patch \
        "$c_config_package/chapter08/tar-1.35" tar_chapter08

    for _item in "${_item_list[@]}"; do
        fn_apply_patch glibc-fhs-1.patch \
            "$c_config_package/$_item/glibc-2.44" "${_item}_glibc_fhs"
        fn_apply_patch glibc-2.44-upstream_fixes-1.patch \
            "$c_config_package/$_item/glibc-2.44" "${_item}_glibc_upstream"
    done

    fn_apply_patch sysvinit-3.14-consolidated-1.patch \
        "$c_config_package/optional-sysvinit/sysvinit-3.14" sysvinit_optional
}

fn_extract_all() {
    local _item
    local _name
    local _list
    local v_missing=0
    local -A v_item_seen=()
    local -a _list_list=(wget-list wget-list-systemd)

    for _list in "${_list_list[@]}"; do
        if [[ ! -f "$c_config_root/$_list" ]]; then
            printf '%s\n' "Error: package list does not exist: $c_config_root/$_list" >&2
            return 1
        fi

        while IFS= read -r _item || [[ -n "$_item" ]]; do
            [[ -z "$_item" || "$_item" == \#* ]] && continue
            _name="${_item##*/}"
            [[ -n "${v_item_seen[$_name]:-}" ]] && continue
            v_item_seen["$_name"]=1

            if [[ ! -f "$c_config_download/$_name" ]]; then
                printf '%s\n' "# . - missing - archive : $_item"
                ((v_missing += 1))
                continue
            fi

            case "$_name" in
                *.patch)
                    ;;
                *.tar.*|*.zip)
                    fn_extract_source "$_name"
                    ;;
                *)
                    printf '%s\n' "# . - skip - unsupported list item : $_name"
                    ;;
            esac
        done < "$c_config_root/$_list"
    done

    fn_prepare_nested_sources
    fn_copy_patches
    fn_apply_patches

    printf '%s\n' "# . - missing - total : $v_missing"
    if (( v_missing > 0 )); then
        return 1
    fi
}

fn_main() {
    printf '%s\n' "# - : ${BASH_SOURCE[0]}"
    printf '%s\n' '# . - dependency - check'
    fn_dependency_check

    if [[ ! -d "$c_config_download" ]]; then
        printf '%s\n' "Error: download directory does not exist: $c_config_download" >&2
        return 1
    fi

    mkdir -p -- "$c_config_package" "$c_config_state"
    printf '%s\n' '# . - action - extract and patch'
    fn_extract_all
    printf '%s\n' '# . - end'
}

fn_main "$@"
