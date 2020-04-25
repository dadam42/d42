#include "type_dyn_array.h"

bool	type_dyn_array_init(t_type_dyn_array *type_dyn_array
							, size_t	count)
{
	return (chunk_dyn_array_init(
			type_dyn_array->chunk_dyn_array,
			sizeof(type),
			count));
}
