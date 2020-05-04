#include "iterator.h"

bool	iterator_next(t_iterator *iterator)
{
	return (iterator->next_(iterator));
}
