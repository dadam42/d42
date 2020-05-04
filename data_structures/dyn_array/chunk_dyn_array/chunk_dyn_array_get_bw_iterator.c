/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_get_bw_iterator.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:35:18 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 22:14:45 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	chunk_dyn_array_get_bw_iterator(
			t_chunk_dyn_array *cda
			, t_chunk_dyn_array_iterator *iterator)
{
	t_iterator_initer initer;

	initer.next = chunk_dyn_array_bw_iterator_next;
	initer.reset_position = chunk_dyn_array_bw_iterator_reset_position;
	initer.at_start = chunk_dyn_array_fw_iterator_at_end;
	initer.at_end = chunk_dyn_array_fw_iterator_at_start;
	initer.deref = chunk_dyn_array_iterator_deref_as_iterator;
	iterator_init(&iterator->iterator, &initer);
	iterator->array = cda;
	iterator->position = (iterator->array->count > 0
						 ? iterator->array->count - 1
						 : 0);
}
