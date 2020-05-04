#include "iterator.h"

void	iterator_reset_position_(t_iterator *iterator)
{
	iterator->next_ = iterator_first_next_;
	iterator->reset_position(iterator);
}
