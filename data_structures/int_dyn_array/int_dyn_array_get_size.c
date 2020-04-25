#include "int_dyn_array.h"

size_t	int_dyn_array_get_size(
			t_int_dyn_array *int_dyn_array)
{
	return (chunk_dyn_array_get_size(
			(t_chunk_dyn_array*)int_dyn_array));
}
