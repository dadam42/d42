# See notice at the end if needed.

EXETARGETS= 
LIBTARGETS=libdyn_array.a libchunk_dyn_array.a
libdyn_array_SRCS=dyn_array_get_addr.c dyn_array_get_elt.c dyn_array_inc_enlarge.c dyn_array_init.c dyn_array_iterator_deref.c dyn_array_iterator_init_bw_iterator.c dyn_array_iterator_init.c dyn_array_iterator_init_fw_iterator.c dyn_array_iterator_init_iterator.c dyn_array_iterator_next.c dyn_array_iterator_prev.c dyn_array_iterator_reached_begin.c dyn_array_iterator_reached_end.c dyn_array_mult_enlarge.c dyn_array_release.c dyn_array_set.c 
libdyn_array_USELIBS=libiterator libft
libiterator_DIR=../iterator
libft_DIR=../libft
libchunk_dyn_array_SRCS=chunk_dyn_array_init.c chunk_dyn_array_release.c chunk_dyn_array_set_elt.c chunk_dyn_array_get_elt_addr.c chunk_dyn_array_get_elt.c chunk_dyn_array_enlarge.c chunk_dyn_array_shrink.c chunk_dyn_array_get_size.c chunk_dyn_array_get_fw_iterator.c chunk_dyn_array_get_bw_iterator.c chunk_dyn_array_iterator_reset_position.c chunk_dyn_array_iterator_next.c chunk_dyn_array_iterator_deref.c chunk_dyn_array_iterator_at_start.c chunk_dyn_array_iterator_at_end.c chunk_dyn_array_fw_iterator_next.c chunk_dyn_array_fw_iterator_deref.c chunk_dyn_array_fw_iterator_at_end.c chunk_dyn_array_fw_iterator_at_start.c chunk_dyn_array_fw_iterator_reset_position.c chunk_dyn_array_bw_iterator_next.c chunk_dyn_array_bw_iterator_deref.c chunk_dyn_array_bw_iterator_reset_position.c
libchunk_dyn_array_USELIBS=libft

GEN_MAKEFILE_PATH=../.d42Makefile
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
