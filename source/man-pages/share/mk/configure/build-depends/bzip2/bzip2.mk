# Copyright 2023-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_BZIP2_BZIP2_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_BZIP2_BZIP2_INCLUDED := 1


DEFAULT_BZIP2FLAGS :=
EXTRA_BZIP2FLAGS   :=
BZIP2FLAGS         := $(DEFAULT_BZIP2FLAGS) $(EXTRA_BZIP2FLAGS)
BZIP2              := bzip2


endif  # include guard
