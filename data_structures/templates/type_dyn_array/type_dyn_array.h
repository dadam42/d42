#ifndef TYPE_DYN_ARRAY_H
# define TYPE_DYN_ARRAY_H
# include "chunk_dyn_array.h"
# include <stddef.h>
!d42inclusion

typedef struct	s_type_dyn_array
{
	t_chunk_dyn_array	chunk_dyn_array;
}				t_type_dyn_array;

/*
** Basic actions
*/

bool			type_dyn_array_init(
					t_type_dyn_array *type_dyn_array
					, size_t	count);
bool			type_dyn_array_set_elt(
					t_type_dyn_array *type_dyn_array
					, size_t	idx
					, type		elt);
void			*type_dyn_array_get_elt_addr(
					t_type_dyn_array *type_dyn_array
					, size_t	idx);
type			type_dyn_array_get_elt(
					t_type_dyn_array *type_dyn_array
					, size_t idx);
size_t			type_dyn_array_get_size(
					t_type_dyn_array *type_dyn_array);
bool			type_dyn_array_shrink(
					t_type_dyn_array *type_dyn_array);
void			type_dyn_array_release(
					t_type_dyn_array *type_dyn_array);

/*
** Iterators
*/

typedef struct	s_type_dyn_array_iterator
{
	t_chunk_dyn_array_iterator itor;
}				t_type_dyn_array_iterator;

void			type_dyn_array_get_fw_iterator(
					t_type_dyn_array			*da
					, t_type_dyn_array_iterator	*itor);
void			type_dyn_array_get_bw_iterator(
					t_type_dyn_array			*da
					, t_type_dyn_array_iterator	*itor);
void			type_dyn_array_iterator_reset_position(
					t_type_dyn_array_iterator	*itor);
void			type_dyn_array_iterator_next(
					t_type_dyn_array_iterator	*itor);
type			*type_dyn_array_iterator_deref(
					t_type_dyn_array_iterator	*itor);
bool			type_dyn_array_iterator_at_start(
					t_type_dyn_array_iterator	*itor);
bool			type_dyn_array_iterator_at_end(
					t_type_dyn_array_iterator	*itor);
#endif
