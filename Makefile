# Makefile for the UMB Scheme interpreter.

include $(APPDIR)/Make.defs

# UMB-Scheme built-in application info

PROGNAME  = scheme
PRIORITY  = 100
#$(INTERPRETERS_UMB_SCHEME_PRIORITY)
STACKSIZE = 4096
#$(INTERPRETERS_UMB_SCHEME_STACKSIZE)
MODULE    = $(INTERPRETERS_UMB_SCHEME)

# UMB-Scheme components

CSRCS =  object.c primitive.c debug.c
CSRCS += io.c compiler.c eval.c architecture.c number.c
CSRCS += fixnum.c bignum.c rational.c real.c complex.c

MAINSRC = steering.c

LDLIBS += $(APPDIR)/../nuttx/libs/libm/libm.a
LDLIBS += $(APPDIR)/../nuttx/libs/libc/libc.a

include $(APPDIR)/Application.mk

### E O F ###
