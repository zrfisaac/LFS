# Copyright 2021-2024, Alejandro Colomar <alx@kernel.org>
# SPDX-License-Identifier: LGPL-3.0-only WITH LGPL-3.0-linking-exception


ifndef MAKEFILE_CONFIGURE_DIRECTORY_VARIABLES_INSTALL_INCLUDED
MAKEFILE_CONFIGURE_DIRECTORY_VARIABLES_INSTALL_INCLUDED := 1


include $(MAKEFILEDIR)/configure/directory_variables/src.mk


DESTDIR     :=
prefix      := /usr/local
datarootdir := $(prefix)/share
mandir      := $(datarootdir)/man
docdir      := $(datarootdir)/doc
htmldir     := $(docdir)/html/man
pdfdir      := $(docdir)/pdf


$(foreach s, $(MANSECTIONS),                                                  \
	$(eval man$(s)dir := $(mandir)/man$(s)))
$(foreach s, $(MANSECTIONS),                                                  \
	$(eval man$(s)ext := .$(s)))


endif  # include guard
