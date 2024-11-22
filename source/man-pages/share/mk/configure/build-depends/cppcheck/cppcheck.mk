# Copyright 2022-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_CPPCHECK_CPPCHECK_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_CPPCHECK_CPPCHECK_INCLUDED := 1


include $(MAKEFILEDIR)/configure/directory_variables/src.mk


CPPCHECK_SUPPRESS     := $(SYSCONFDIR)/cppcheck/cppcheck.suppress
DEFAULT_CPPCHECKFLAGS := \
	--enable=all \
	--error-exitcode=2 \
	--inconclusive \
	--check-level=exhaustive \
	--quiet \
	--suppressions-list=$(CPPCHECK_SUPPRESS)
EXTRA_CPPCHECKFLAGS   :=
CPPCHECKFLAGS         := $(DEFAULT_CPPCHECKFLAGS) $(EXTRA_CPPCHECKFLAGS)
CPPCHECK              := cppcheck


endif  # include guard
