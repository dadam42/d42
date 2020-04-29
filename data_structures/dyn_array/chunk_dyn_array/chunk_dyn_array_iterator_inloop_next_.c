/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_iterator_inloop_next_.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 14:48:00 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 17:53:06 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

bool	chunk_dyn_array_iterator_inloop_next_(
			t_chunk_dyn_array_iterator *iterator)
{
	if (chunk_dyn_array_iterator_at_end(iterator))
	{
		iterator->next_ = chunk_dyn_array_iterator_noop_next_;
		return (false);
	}
	iterator->next(iterator);
	return (true);
}
