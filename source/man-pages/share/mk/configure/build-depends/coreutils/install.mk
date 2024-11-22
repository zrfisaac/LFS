# Copyright 2022-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_COREUTILS_INSTALL_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_COREUTILS_INSTALL_INCLUDED := 1


INSTALL := install


INSTALL_DATA    := $(INSTALL) -m 644
INSTALL_DIR     := $(INSTALL) -m 755 -d


endif  # include guard
