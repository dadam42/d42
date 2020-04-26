#include "type_dyn_array.h"

void	type_dyn_array_iterator_next(
			t_type_dyn_array_iterator *itor)
{
	chunk_dyn_array_iterator_next(&itor->itor);
}
