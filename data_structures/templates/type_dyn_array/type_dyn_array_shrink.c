#include "type_dyn_array.h"

bool	type_dyn_array_shrink(
			t_type_dyn_array *type_dyn_array)
{
	return (chunk_dyn_array_shrink(
		(t_chunk_dyn_array*)type_dyn_array));
}
