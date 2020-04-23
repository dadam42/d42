#-- TARGET definition :
TARGET_TYPE=lib#one of : exe, lib, default to exe
TARGET=libdyn_array.a
#-- libs definition :
LIBS=libft libiterator#list of libs (prefixed with lib : e.g libfoo) which must be recompiled by this Makefile
STDLIBS=#list of list which must be include to compile
#-- definitions for each libfoo from $(LIBS):
ft_DIR=../libft#mandatory, directory containing both library and its Makefile.
iterator_DIR=../iterator
foo_INC=#optionnal, default to lib_DIR : dirname containing lib's headers files.
#-- srcs definition :
SRCS=dyn_array_get_addr.c dyn_array_get_elt.c dyn_array_inc_enlarge.c dyn_array_init.c dyn_array_iterator_deref.c dyn_array_iterator_init_bw_iterator.c dyn_array_iterator_init.c dyn_array_iterator_init_fw_iterator.c dyn_array_iterator_init_iterator.c dyn_array_iterator_next.c dyn_array_iterator_prev.c dyn_array_iterator_reached_begin.c dyn_array_iterator_reached_end.c dyn_array_mult_enlarge.c dyn_array_release.c dyn_array_set.c iterator_apply.c 
SRCS_DIRS=
SRCS_INCS=.#
#
#---- dont change anything after this
#--------------------------------------------------------------------------------------

GEN_MAKEFILE_PATH=../.d42Makefile
include $(GEN_MAKEFILE_PATH)/genMakefile

