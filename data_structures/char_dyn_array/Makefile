# See notice at the end if needed.

EXETARGETS= 
LIBTARGETS=libchar_dyn_array.a
libchar_dyn_array_SRCS=char_dyn_array_get_bw_iterator.c char_dyn_array_get_elt_addr.c char_dyn_array_get_elt.c char_dyn_array_get_fw_iterator.c char_dyn_array_get_size.c char_dyn_array_init.c char_dyn_array_iterator_at_end.c char_dyn_array_iterator_at_start.c char_dyn_array_iterator_deref.c char_dyn_array_iterator_next.c char_dyn_array_iterator_reset_position.c char_dyn_array_release.c char_dyn_array_set_elt.c char_dyn_array_shrink.c 
libchar_dyn_array_USELIBS=libft libchunk_dyn_array.a
libft_DIR=../../libft 
libchunk_dyn_array_DIR=../chunk_dyn_array

GEN_MAKEFILE_PATH=../../.d42Makefile
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
