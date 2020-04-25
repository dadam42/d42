#ifndef TYPE_DYN_ARRAY_H
# define TYPE_DYN_ARRAY_H
# include "chunk_dyn_array.h"
# include <stddef.h>
!d42inclusion

typedef struct	s_type_dyn_array
{
	t_chunk_dyn_array	chunk_dyn_array;
}				t_type_dyn_array;

bool			type_dyn_array_init(t_type_dyn_array *type_dyn_array
									, size_t	count);
bool			type_dyn_array_set_elt(t_type_dyn_array *type_dyn_array
									, size_t	idx
									, type		elt);
void			*type_dyn_array_get_elt_addr(t_type_dyn_array *type_dyn_array
									, size_t	idx);
type			type_dyn_array_get_elt(t_type_dyn_array *type_dyn_array
									, size_t idx);
void			type_dyn_array_release(t_type_dyn_array *type_dyn_array);
#endif
