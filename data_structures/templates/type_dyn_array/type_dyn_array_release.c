#include "type_dyn_array.h"

void	type_dyn_array_release(
			t_type_dyn_array *type_dyn_array)
{
	chunk_dyn_array_release(
		(t_chunk_dyn_array*)type_dyn_array);
}
