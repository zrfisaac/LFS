# Copyright 2022-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_CHECKPATCH_CHECKPATCH_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_CHECKPATCH_CHECKPATCH_INCLUDED := 1


include $(MAKEFILEDIR)/configure/directory_variables/src.mk


CHECKPATCH_CONF         := $(SYSCONFDIR)/checkpatch/checkpatch.conf
DEFAULT_CHECKPATCHFLAGS :=
EXTRA_CHECKPATCHFLAGS   :=
CHECKPATCHFLAGS         := $(DEFAULT_CHECKPATCHFLAGS) $(EXTRA_CHECKPATCHFLAGS)
CHECKPATCH              := checkpatch


endif  # include guard
