noinst_LTLIBRARIES = libcommon.la

libcommon_la_SOURCES = \
    libmain.c \
    memory.c \
    utils.c \
    logging.c \
    threads.c \
    sockinterface.c

libcommon_la_CPPFLAGS = \
    -I$(top_srcdir)/include \
    -I$(top_srcdir)/include/public \
    @OPENSSL_INCLUDES@

libcommon_la_LDFLAGS = \
    -static \
    @OPENSSL_LDFLAGS@
