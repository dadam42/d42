#include "type_dyn_array.h"

size_t	type_dyn_array_get_size(
			t_type_dyn_array *type_dyn_array)
{
	return (chunk_dyn_array_get_size(
			(t_chunk_dyn_array*)type_dyn_array));
}
