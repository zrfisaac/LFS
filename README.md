# Linux From Scratch — Personal Study Project

This repository is my personal attempt to study and use [Linux From Scratch (LFS)](https://www.linuxfromscratch.org/) as a way to learn Linux at the source-code level.

The project is focused on understanding how a Linux system is built, how its components work together, and how the build process can be followed and maintained from source.

## LFS version

This project follows **LFS 13.1**.

The LFS version refers to the official LFS book and is separate from this repository's internal version number.

## Internal versioning

The version shown in this repository is a personal, internal identifier. It is not the LFS version.

The format is:

```text
YY.MM.DD.N
```

Where:

- `YY` is the year;
- `MM` is the month;
- `DD` is the day;
- `N` is the change number made on that day.

For example, `26.10.31.2` means the second internal change made on October 31, 2026.

This numbering is intended only for internal control and may change in the future.

## Releases

Repository releases will use the correct official LFS version instead of the internal personal version. This keeps the LFS version clear and avoids confusing the project's internal change tracking with the version of LFS being studied.

## Download and checksum scripts

The [down.sh](./down.sh) script downloads only the packages that do not already exist in the local `download` directory, using the lists `wget-list` and `wget-list-systemd`.

The [sum.sh](./sum.sh) script checks the downloaded packages in the same directory against `md5sums`.

The [down-check.sh](./down-check.sh) script checks whether every package listed in `wget-list` and `wget-list-systemd` exists in the local `download` directory. It lists the complete URL of each missing package and reports the total at the end.

```bash
./down.sh
./down-check.sh
./sum.sh
```

## Disclaimer

This is an independent personal study project. It is not an official LFS release or a replacement for the official LFS documentation.
