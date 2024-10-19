## Process this file with automake to produce Makefile.in

INCLUDES = \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	@PACKAGE_CFLAGS@

bin_PROGRAMS = app_isie_final

app_isie_final_SOURCES = \
	main.c \
	support.c support.h \
	interface.c interface.h \
	callbacks.c callbacks.h \
	list_elec.c list_elec.h \
	election.c election.h \
	bureau.c bureau.h\
	reclamation.c reclamation.h
	
app_isie_final_LDADD = @PACKAGE_LIBS@ $(INTLLIBS)

