# Copyright 2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_BUILD_DEPENDS_GROFF_AFMTODIT_INCLUDED
MAKEFILE_CONFIGURE_BUILD_DEPENDS_GROFF_AFMTODIT_INCLUDED := 1


PDF_TEXT_ENC := /usr/share/groff/current/font/devpdf/enc/text.enc
PDF_TEXT_MAP := /usr/share/groff/current/font/devpdf/map/text.map


DEFAULT_AFMTODITFLAGS :=
EXTRA_AFMTODITFLAGS   :=
AFMTODITFLAGS         := $(DEFAULT_AFMTODITFLAGS) $(EXTRA_AFMTODITFLAGS)
AFMTODIT              := afmtodit


endif  # include guard
