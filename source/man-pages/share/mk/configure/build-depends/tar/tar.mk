# Copyright 2021-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_TAR_TAR_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_TAR_TAR_INCLUDED := 1


include $(MAKEFILEDIR)/configure/version.mk


DEFAULT_TARFLAGS := \
	--sort=name \
	--owner=root:0 \
	--group=root:0 \
	--mtime='$(DISTDATE)'
EXTRA_TARFLAGS   :=
TARFLAGS         := $(DEFAULT_TARFLAGS) $(EXTRA_TARFLAGS)
TAR              := tar


endif  # include guard
