#include "type_dyn_array.h"

type	*type_dyn_array_get_elt_addr(
			t_type_dyn_array *type_dyn_array
			, size_t idx)
{
	return ((type*)chunk_dyn_array_get_elt_addr(
			(t_chunk_dyn_array*)type_dyn_array
			, idx));
}
