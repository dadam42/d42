#include "iterator.h"

void	*iterator_deref(t_iterator *iterator)
{
	return (iterator->deref(iterator));
}
