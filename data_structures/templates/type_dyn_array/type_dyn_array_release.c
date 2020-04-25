#include "type_dyn_array.h"

void	type_dyn_array(
			t_type_dyn_array *type_dyn_array)
{
	chunk_dyn_array_release(type_dyn_array->chunk_dyn_array);
}
