#-- TARGET definition :
TARGET_TYPE=lib#one of : exe, lib, default to exe
TARGET=libarray_stack.a
#-- libs definition :
LIBS=libstack libdyn_array#list of libs (prefixed with lib : e.g libfoo) which must be recompiled by this Makefile
STDLIBS=#list of list which must be include to compile
#-- definitions for each libfoo from $(LIBS):
stack_DIR=../stack#mandatory, directory containing both library and its Makefile.
dyn_array_DIR=../data_structures#mandatory, directory containing both library and its Makefile.
foo_INC=#optionnal, default to lib_DIR : dirname containing lib's headers files.
#-- srcs definition :
SRCS=array_stack_enstack.c array_stack_init.c array_stack_init_stack.c array_stack_peek.c array_stack_pop.c array_stack_release.c array_stack_size.c 
SRCS_DIRS=
SRCS_INCS=.#
#
#---- dont change anything after this
#--------------------------------------------------------------------------------------

GEN_MAKEFILE_PATH=../.d42Makefile
include $(GEN_MAKEFILE_PATH)/genMakefile

