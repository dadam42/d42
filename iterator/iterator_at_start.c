#include "iterator.h"

bool	iterator_at_start(t_iterator *iterator)
{
	return (iterator->at_start(iterator));
}
