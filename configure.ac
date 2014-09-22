AC_PREREQ(2.61)

# package version number (not shared library version)
# odd micro numbers indicate in-progress development
# even micro numbers indicate released versions
m4_define(unstrung_version_major, 0)
m4_define(unstrung_version_minor, 1)
m4_define(unstrung_version_micro, 0)

m4_define([unstrung_version],
          [unstrung_version_major.unstrung_version_minor.unstrung_version_micro])
m4_define([unstrung_api_version],
          [unstrung_version_major.unstrung_version_minor])

AC_INIT(unstrung, unstrung_version)
AM_INIT_AUTOMAKE([foreign])
AC_CONFIG_HEADERS(config.h)

# Checks for programs.
#AM_PROG_AR
#AC_LIBTOOL_DLOPEN
AC_PROG_LIBTOOL
AC_PROG_CXX
AC_PROG_INSTALL

# enable pkg-config
#PKG_PROG_PKG_CONFIG

# Checks for library functions.
#AC_CHECK_FUNCS([memset])

AC_SUBST(unstrung_CFLAGS)
AC_SUBST(unstrung_CPPFLAGS)
AC_SUBST(unstrung_LIBS)

AC_CONFIG_FILES([
Makefile
lib/Makefile
lib/libfakeiface/Makefile
lib/libndmgmt/Makefile
lib/libnetlink/Makefile
lib/libosw/Makefile
programs/Makefile
programs/sunshine/Makefile
])

AC_OUTPUT
