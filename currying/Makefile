#-- TARGET definition :
TARGET_TYPE=lib#one of : exe, lib, default to exe
TARGET=libcurry.a
#-- libs definition :
LIBS=#list of libs (prefixed with lib : e.g libfoo) which must be recompiled by this Makefile
STDLIBS=#list of list which must be include to compile
#-- definitions for each libfoo from $(LIBS):
foo_DIR=..#mandatory, directory containing both library and its Makefile.
foo_INC=#optionnal, default to lib_DIR : dirname containing lib's headers files.
#-- srcs definition :
SRCS=curryer_block_left.c curryer_block_right.c left_curryer_init.c right_curryer_init.c 
SRCS_DIRS=
SRCS_INCS=.#
#
#---- dont change anything after this
#--------------------------------------------------------------------------------------

GEN_MAKEFILE_PATH=../.d42Makefile
include $(GEN_MAKEFILE_PATH)/genMakefile

