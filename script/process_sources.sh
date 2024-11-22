#!/bin/bash

# Directories
SOURCE_DIR="source"       # Directory containing source archives
PATCH_DIR="patches"       # Directory containing patches (optional)
OUTPUT_DIR="extracted"    # Directory to store extracted content

# Create output directory
mkdir -p "$OUTPUT_DIR"

# Function to extract archives
extract_archive() {
    local archive="$1"
    local folder="$OUTPUT_DIR/$(basename "$archive" | sed -e 's/\(\.tar\..*\)//')"
    
    echo "Processing $archive..."
    mkdir -p "$folder"

    case "$archive" in
        *.tar.gz|*.tgz) tar -xzf "$archive" -C "$folder" ;;
        *.tar.xz) tar -xJf "$archive" -C "$folder" ;;
        *.tar.bz2) tar -xjf "$archive" -C "$folder" ;;
        *.zip) unzip "$archive" -d "$folder" ;;
        *) echo "Unsupported file type: $archive" ;;
    esac

    echo "Extracted to $folder"
}

# Function to apply patches
apply_patches() {
    local folder="$1"
    local base_name="$2"

    if [ -d "$PATCH_DIR" ]; then
        for patch in "$PATCH_DIR/"*"$base_name"*.patch; do
            if [ -f "$patch" ]; then
                echo "Applying patch $patch to $folder..."
                (
                    cd "$folder" || exit
                    patch -p1 < "$patch" || patch -p0 < "$patch"
                )
            fi
        done
    fi
}


# Process each archive in the source directory
for archive in "$SOURCE_DIR"/*; do
    if [ -f "$archive" ]; then
        base_name=$(basename "$archive" | sed -e 's/\(\.tar\..*\)//')
        
        # Extract the archive
        extract_archive "$archive"

        # Apply patches if available
        folder="$OUTPUT_DIR/$base_name"
        apply_patches "$folder" "$base_name"
    fi
done

echo "All files processed."
