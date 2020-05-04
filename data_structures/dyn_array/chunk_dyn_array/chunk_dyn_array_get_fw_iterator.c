/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_get_fw_iterator.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:35 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 21:08:05 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	chunk_dyn_array_get_fw_iterator(
			t_chunk_dyn_array *cda
			, t_chunk_dyn_array_iterator *iterator)
{
	t_iterator_initer initer;

	initer.next = chunk_dyn_array_fw_iterator_next;
	initer.reset_position = chunk_dyn_array_fw_iterator_reset_position;
	initer.at_start = chunk_dyn_array_fw_iterator_at_start;
	initer.at_end = chunk_dyn_array_fw_iterator_at_end;
	initer.deref = chunk_dyn_array_iterator_deref_as_iterator;
	iterator_init(&iterator->iterator, &initer);
	iterator->position = 0;
	iterator->array = cda;
}
