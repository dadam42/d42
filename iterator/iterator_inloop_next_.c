#include "iterator.h"

bool	iterator_inloop_next_(
			t_iterator *iterator)
{
	if (iterator->at_end(iterator))
	{
		iterator->next_ = iterator_noop_next_;
		return (false);
	}
	iterator->next(iterator);
	return (true);
}
