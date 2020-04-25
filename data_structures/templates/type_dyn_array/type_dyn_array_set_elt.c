#include "type_dyn_array.h"

bool	type_dyn_array_set_elt(
					t_type_dyn_array *type_dyn_array
					, size_t idx
					, type elt)
{
	return (chunk_dyn_array_set_elt(
			(t_chunk_dyn_array*)type_dyn_array
			, (void*)(&elt)
			, idx));
}
