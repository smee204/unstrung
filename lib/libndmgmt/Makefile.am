AM_CPPFLAGS = -I$(top_srcdir)/include $(LIBNL_CFLAGS)
lib_LTLIBRARIES=libndmgmt.la
libndmgmt_la_SOURCES=counter_names.c dag.cpp dao.cpp daoack.cpp debug.cpp dio.cpp event.cpp iface.cpp neighbour.cpp netlink.cpp node.cpp peers.cpp prefix.cpp rplmsg.cpp
libndmgmt_la_CPPFLAGS=$(AM_CPPFLAGS)

AM_LDFLAGS = @unstrung_LIBS@
CLEANFILES = *~ 
