EXTRA_DIST = *.mb

install-data-local:
	$(mkinstalldirs) $(DESTDIR)$(datadir)/zhcon/input/
	$(INSTALL_DATA) $(srcdir)/*.mb $(DESTDIR)$(datadir)/zhcon/input/

uninstall-local:
	-rm -f $(DESTDIR)$(datadir)/zhcon/input/*.mb
