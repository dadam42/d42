#include "int_dyn_array.h"

bool	int_dyn_array_shrink(
			t_int_dyn_array *int_dyn_array)
{
	return (chunk_dyn_array_shrink(
		(t_chunk_dyn_array*)int_dyn_array));
}
