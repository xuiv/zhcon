EXTRA_DIST = *.bpsf

install-data-local:
	$(mkinstalldirs) $(DESTDIR)$(datadir)/zhcon/font/
	$(INSTALL_DATA) $(srcdir)/*.bpsf $(DESTDIR)$(datadir)/zhcon/font/

uninstall-local:
	-rm -f $(DESTDIR)$(datadir)/zhcon/font/*.bpsf
