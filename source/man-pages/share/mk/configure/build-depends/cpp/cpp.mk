# Copyright 2022-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_CPP_CPP_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_CPP_CPP_INCLUDED := 1


include $(MAKEFILEDIR)/configure/build-depends/gcc/cc.mk
include $(MAKEFILEDIR)/configure/build-depends/pkgconf/pkgconf.mk
include $(MAKEFILEDIR)/configure/verbose.mk


DEFAULT_CPPFLAGS := $(shell $(PKGCONF_CMD) --cflags $(PKGCONF_LIBS) $(HIDE_ERR))
EXTRA_CPPFLAGS   :=
CPPFLAGS         := $(DEFAULT_CPPFLAGS) $(EXTRA_CPPFLAGS)
CPP              := $(CC) $(CFLAGS) -E


endif  # include guard
