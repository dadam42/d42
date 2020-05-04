#include "iterator.h"

bool iterator_at_end(t_iterator *iterator)
{
	return (iterator->at_end(iterator));
}
