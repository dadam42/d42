#include "type_dyn_array.h"

type	type_dyn_array_get_elt(
			t_type_dyn_array *type_dyn_array
			, size_t idx)
{
	type	ret;

	chunk_dyn_array_get_elt(
			(t_chunk_dyn_array*)type_dyn_array
			, idx
			, &ret);
	return (ret);
}
