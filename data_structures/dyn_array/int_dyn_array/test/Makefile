# See notice at the end if needed.

EXETARGETS=basic_operations iterators
LIBTARGETS= 
basic_operations_SRCS=basic_operations.c
basic_operations_USELIBS=libint_dyn_array libchunk_dyn_array libft libiterator
iterators_SRCS=iterators.c
iterators_USELIBS=$(basic_operations_USELIBS)
libft_DIR=../../../../libft
libchunk_dyn_array_DIR=../../chunk_dyn_array
libint_dyn_array_DIR=..
libiterator_DIR=../../../../iterator
GEN_MAKEFILE_PATH=../../../../.d42Makefile
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
