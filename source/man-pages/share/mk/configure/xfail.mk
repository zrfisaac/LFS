# Copyright 2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_XFAIL_INCLUDED
MAKEFILE_CONFIGURE_XFAIL_INCLUDED := 1


SKIP_XFAIL := yes
ifeq ($(SKIP_XFAIL),yes)
else ifeq ($(SKIP_XFAIL),no)
else
$(warning "SKIP_XFAIL": "$(SKIP_XFAIL)")
$(error Valid values for "SKIP_XFAIL": ["yes", "no"])
endif


endif  # include guard
