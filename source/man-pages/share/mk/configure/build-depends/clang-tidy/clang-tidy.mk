# Copyright 2022-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_CLANG_TIDY_CLANG_TIDY_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_CLANG_TIDY_CLANG_TIDY_INCLUDED := 1


include $(MAKEFILEDIR)/configure/directory_variables/src.mk


CLANG_TIDY_CONF         := $(SYSCONFDIR)/clang-tidy/config.yaml
DEFAULT_CLANG_TIDYFLAGS := \
	--config-file=$(CLANG_TIDY_CONF) \
	--quiet \
	--use-color
EXTRA_CLANG_TIDYFLAGS   :=
CLANG_TIDYFLAGS         := $(DEFAULT_CLANG_TIDYFLAGS) $(EXTRA_CLANG_TIDYFLAGS)
CLANG_TIDY              := clang-tidy


endif  # include guard
