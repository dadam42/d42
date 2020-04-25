# See notice at the end if needed.

EXETARGETS= 
LIBTARGETS=libint_dyn_array.a
libint_dyn_array_SRCS=int_dyn_array_get_elt_addr.c int_dyn_array_get_elt.c int_dyn_array_init.c int_dyn_array_release.c int_dyn_array_set_elt.c 
libint_dyn_array_USELIBS=libft libchunk_dyn_array
libft_DIR=../../libft
libchunk_dyn_array_DIR=..
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
