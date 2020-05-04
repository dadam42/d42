#include "iterator.h"

bool	iterator_first_next_(
			t_iterator	*iterator)
{
	if (!iterator->at_start(iterator))
	{
		iterator->next_ = iterator_noop_next_;
		return (false);
	}
	iterator->next_ = iterator_inloop_next_;
	return (true);
}
