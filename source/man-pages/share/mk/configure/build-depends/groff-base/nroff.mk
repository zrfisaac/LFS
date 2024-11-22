# Copyright 2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_GROFF_BASE_NROFF_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_GROFF_BASE_NROFF_INCLUDED := 1


include $(MAKEFILEDIR)/configure/build-depends/coreutils/echo.mk
include $(MAKEFILEDIR)/configure/build-depends/coreutils/expr.mk
include $(MAKEFILEDIR)/configure/build-depends/grep/grep.mk
include $(MAKEFILEDIR)/configure/build-depends/libc-bin/locale.mk
include $(MAKEFILEDIR)/configure/build-depends/man/man.mk


NROFF_CHECKSTYLE_LVL := 3
NROFF_LINE_LENGTH    := $(shell $(EXPR) $(MANWIDTH) - 2)
NROFF_OUT_DEVICE     := \
	$(shell $(LOCALE) charmap \
		| $(GREP) -i 'utf-*8' >/dev/null \
		&& $(ECHO) utf8 \
		|| $(ECHO) ascii \
	)


DEFAULT_NROFFFLAGS := \
	-T$(NROFF_OUT_DEVICE) \
	-rLL=$(NROFF_LINE_LENGTH)n \
	-rCHECKSTYLE=$(NROFF_CHECKSTYLE_LVL) \
	-ww
EXTRA_NROFFFLAGS   :=
NROFFFLAGS         := $(DEFAULT_NROFFFLAGS) $(EXTRA_NROFFFLAGS)


endif  # include guard
