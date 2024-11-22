# Copyright 2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_GROFF_BASE_PIC_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_GROFF_BASE_PIC_INCLUDED := 1


DEFAULT_PICFLAGS :=
EXTRA_PICFLAGS   :=
PICFLAGS         := $(DEFAULT_PICFLAGS) $(EXTRA_PICFLAGS)
PIC              := pic


endif  # include guard
