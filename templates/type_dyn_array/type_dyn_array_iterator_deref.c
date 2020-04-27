#include "type_dyn_array.h"

type	*type_dyn_array_iterator_deref(
			t_type_dyn_array_iterator *itor)
{
	return ((type*)chunk_dyn_array_iterator_deref(
											&itor->itor));
}
