#include "type_dyn_array.h"

bool	type_dyn_array_set_elt(
					t_type_dyn_array	*type_dyn_array
					, size_t idx
					,  type elt)
{
	return (chunk_dyn_array_set_elt(type_dyn_array->chunk_dyn_array
			, idx
			, (void*)(&elt)));
}
