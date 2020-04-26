/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_get_bw_iterator.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:35:18 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 21:15:40 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	chunk_dyn_array_get_bw_iterator(
			t_chunk_dyn_array *cda
			, t_chunk_dyn_array_iterator *iterator)
{
	iterator->array = cda;
	iterator->next = chunk_dyn_array_bw_iterator_next;
	iterator->deref = chunk_dyn_array_bw_iterator_deref;
	iterator->reset_position = chunk_dyn_array_bw_iterator_reset_position;
	iterator->at_start = chunk_dyn_array_fw_iterator_at_end;
	iterator->at_end = chunk_dyn_array_fw_iterator_at_start;
	iterator->position = iterator->array->count;
}
