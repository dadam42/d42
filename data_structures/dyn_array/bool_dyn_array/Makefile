# See notice at the end if needed.

EXETARGETS= 
LIBTARGETS=libbool_dyn_array.a
libbool_dyn_array_SRCS=bool_dyn_array_get_bw_iterator.c bool_dyn_array_get_elt_addr.c bool_dyn_array_get_elt.c bool_dyn_array_get_fw_iterator.c bool_dyn_array_get_size.c bool_dyn_array_init.c bool_dyn_array_iterator_at_end.c bool_dyn_array_iterator_at_start.c bool_dyn_array_iterator_deref.c bool_dyn_array_iterator_next.c bool_dyn_array_iterator_reset_position.c bool_dyn_array_release.c bool_dyn_array_set_elt.c bool_dyn_array_shrink.c 
libbool_dyn_array_USELIBS=libft libchunk_dyn_array libiterator
libft_DIR=../../../libft 
libchunk_dyn_array_DIR=../chunk_dyn_array
libiterator_DIR=../../../iterator

GEN_MAKEFILE_PATH=../../../.d42Makefile
include $(GEN_MAKEFILE_PATH)/genMakefile

# Each target muck be in EXETARGETS or LIBTARGETS
# Each target can define
# 		+ it's source file : 									target_SRCS
# 		+ directories where to find the sources : 				target_DIRS
# 			~ default to Makefile's directory if not defined
#		+ directories where to find headers :					target_INCS
#			~ default to Makefile's directory if not defined
# 		+ libs this makefile can compile :						target_USELIBS
# 		+ libs to use but this makefile dont have to compile : 	target_STDLIBS
# Each lib in any target_USELIBS or target_STDLIBS can define
# 		+ directory where to find the lib itself : 				lib_DIR
# 			~ default to Makefile's directory if not defined
#		+ directories where to find the lib's headers : 		lib_INCS
#			~ default to lib_DIR if not defined
# Each lib in any target_USELIBS can define
# 		+ directory where to find the lib's Makefile :			lib_MDIR
# 			~ default to lib_DIR if not defined.
#	
# The genMakfile included here is responsible for this behavior.	
