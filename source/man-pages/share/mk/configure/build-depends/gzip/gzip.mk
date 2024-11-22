# Copyright 2023-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_GZIP_GZIP_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_GZIP_GZIP_INCLUDED := 1


DEFAULT_GZIPFLAGS := -n
EXTRA_GZIPFLAGS   :=
GZIPFLAGS         := $(DEFAULT_GZIPFLAGS) $(EXTRA_GZIPFLAGS)
GZIP              := gzip


endif  # include guard
