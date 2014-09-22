bin_PROGRAMS = sunshine
sunshine_SOURCES = main.cpp sendnd.cpp
sunshine_LDADD = $(top_srcdir)/lib/libndmgmt/libndmgmt.la $(top_srcdir)/lib/libnetlink/libnetlink.la $(top_srcdir)/lib/libosw/libosw.la
AM_CPPFLAGS = -I$(top_srcdir)/include -DBUILDNUMBER=1
AM_CFLAGS = @unstrung_CFLAGS@
AM_LDFLAGS = @unstrung_LIBS@
sunshine_LDFLAGS = -no-install
sunshine_LDFLAGS = -static
CLEANFILES = *~
