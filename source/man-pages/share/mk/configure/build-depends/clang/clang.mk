# Copyright 2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_CLANG_CLANG_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_CLANG_CLANG_INCLUDED := 1


include $(MAKEFILEDIR)/configure/build-depends/gcc/cc.mk


DEFAULT_CLANGFLAGS := \
	$(COMMON_CFLAGS) \
	$(CLANG_CFLAGS)
EXTRA_CLANGFLAGS   :=
CLANGFLAGS         := $(DEFAULT_CLANGFLAGS) $(EXTRA_CLANGFLAGS)


endif  # include guard
