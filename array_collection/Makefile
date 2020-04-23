#-- TARGET definition :
TARGET_TYPE=lib#one of : exe, lib, default to exe
TARGET=libarray_collection.a
#-- libs definition :
LIBS=libdyn_array libstack libarray_stack#list of libs (prefixed with lib : e.g libfoo) which must be recompiled by this Makefile
STDLIBS=#list of list which must be include to compile
#-- definitions for each libfoo from $(LIBS):
dyn_array_DIR=../data_structures#mandatory, directory containing both library and its Makefile.
stack_DIR=../stack
array_stack_DIR=../array_stack
foo_INC=#optionnal, default to lib_DIR : dirname containing lib's headers files.
#-- srcs definition :
SRCS=array_collection_add.c array_collection_contents.c array_collection_init.c array_collection_release.c array_collection_remove.c 
SRCS_DIRS=
SRCS_INCS=.#
#
#---- dont change anything after this
#--------------------------------------------------------------------------------------

GEN_MAKEFILE_PATH=../.d42Makefile
include $(GEN_MAKEFILE_PATH)/genMakefile

