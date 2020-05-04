#include "iterator.h"

void	iterator_reset_position(t_iterator *iterator)
{
	iterator->reset_position_(iterator);
}
