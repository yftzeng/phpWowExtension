.PHONY: all update_upstream ext_skel ext_compile ext_install clean cleanall

all:
	@echo "Makefile options:"
	@echo "1) make update_upstream : initial/update cphalcon kernel"
	@echo "2) make ext_skel extname=EXTENSION_NAME : create skeleton extension"
	@echo "3) make ext_compile extname=EXTENSION_NAME : create skeleton extension"
	@echo "4) make ext_install extname=EXTENSION_NAME : create skeleton extension"

update_upstream:
	@cd scripts && ./update_upstream

ext_skel:
	@cd scripts && ./ext_skel "$(extname)"

ext_compile:
ifdef extname
	@cd ext/$(extname) && phpize && ./configure --enable-$(extname) && CFLAGS="-O2 -fno-delete-null-pointer-checks" make
else
	@echo "Please assign extname variable,"
	@echo "$ make ext_compile extname=EXTENSION_NAME"
endif

ext_install: ext_compile
ifdef extname
	@cd ext/$(extname) && make install
else
	@echo "Please assign extname variable,"
	@echo "$ make ext_compile extname=EXTENSION_NAME"
endif

clean:
	@rm -rf build

distclean: clean
	@rm -rf ext/*
