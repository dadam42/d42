#include "type_dyn_array.h"

void	type_dyn_array_get_fw_iterator(
			t_type_dyn_array *da
			, t_type_dyn_array_iterator *itor)
{
	chunk_dyn_array_get_fw_iterator(
		&da->chunk_dyn_array, &itor->itor);
}