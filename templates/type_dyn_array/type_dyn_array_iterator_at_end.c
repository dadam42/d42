#include "type_dyn_array.h"

bool	type_dyn_array_iterator_at_end(
					t_type_dyn_array_iterator *itor)
{
	return (chunk_dyn_array_iterator_at_end(&itor->itor));
}
