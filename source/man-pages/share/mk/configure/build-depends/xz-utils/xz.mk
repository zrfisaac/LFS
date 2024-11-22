# Copyright 2023-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_XZ_UTILS_XZ_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_XZ_UTILS_XZ_INCLUDED := 1


DEFAULT_XZFLAGS :=
EXTRA_XZFLAGS   :=
XZFLAGS         := $(DEFAULT_XZFLAGS) $(EXTRA_XZFLAGS)
XZ              := xz


endif  # include guard
