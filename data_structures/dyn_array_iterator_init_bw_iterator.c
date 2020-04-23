/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_iterator_init_bw_iterator.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:35:35 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:43:47 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

void	dyn_array_iterator_init_fw_iterator(t_dyn_array_iterator *da_iterator
											, t_iterator *iterator)
{
	iterator_init(iterator, (void*)da_iterator, false);
	iterator->next = dyn_array_iterator_prev_as_iterator;
	iterator->deref = dyn_array_iterator_deref_as_iterator;
	iterator->release = iterator_noop_release;
	iterator->reached_end = dyn_array_iterator_reached_begin_as_iterator;
}
