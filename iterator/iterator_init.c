#include "iterator.h"

void	iterator_init(
				t_iterator *iterator
				, t_iterator_initer *initer)
{
	iterator->next = initer->next;
	iterator->next_ = iterator_first_next_;
	iterator->reset_position_ = iterator_reset_position_;
	iterator->reset_position = initer->reset_position;
	iterator->at_end = initer->at_end;
	iterator->at_start = initer->at_start;
	iterator->deref = initer->deref;
}
