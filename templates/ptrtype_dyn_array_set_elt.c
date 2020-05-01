
#include "type_dyn_array.h"
#include "vs_dyn_array.h"

bool	type_dyn_array_set_elt(
					t_type_dyn_array *type_dyn_array
					, size_t idx
					, void *elt)
{
	if (!chunk_dyn_array_enlarge(
		&type_dyn_array->chunk_dyn_array, idx))
		return (false);
	*(((void**)type_dyn_array->chunk_dyn_array.memory)
		+ idx) = elt;
	if (cda->count <= idx)
		cda->count = idx + 1;
	return (true);
}
