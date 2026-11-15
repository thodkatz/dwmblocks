PREFIX ?= /usr/local
CC ?= cc
LDFLAGS = -lX11

output: dwmblocks

# a file target, so `sudo make install` after `make` doesn't rebuild as root
dwmblocks: dwmblocks.c blocks.def.h blocks.h
	${CC}  dwmblocks.c $(LDFLAGS) -o dwmblocks
blocks.h: blocks.def.h
	cp blocks.def.h $@


clean:
	rm -f *.o *.gch dwmblocks
install: dwmblocks
	mkdir -p $(DESTDIR)$(PREFIX)/bin
	install -m 0755 dwmblocks $(DESTDIR)$(PREFIX)/bin/dwmblocks
	install -m 0755 scripts/sb-* $(DESTDIR)$(PREFIX)/bin/
	chmod 0644 $(DESTDIR)$(PREFIX)/bin/sb-theme
uninstall:
	rm -f $(DESTDIR)$(PREFIX)/bin/dwmblocks $(DESTDIR)$(PREFIX)/bin/sb-*

.PHONY: output clean install uninstall
