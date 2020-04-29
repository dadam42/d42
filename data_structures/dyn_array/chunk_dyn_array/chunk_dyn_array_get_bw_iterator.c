/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_get_bw_iterator.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:35:18 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 19:49:13 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	chunk_dyn_array_get_bw_iterator(
			t_chunk_dyn_array *cda
			, t_chunk_dyn_array_iterator *iterator)
{
	iterator->array = cda;
	iterator->next = chunk_dyn_array_bw_iterator_next;
	iterator->next_ = chunk_dyn_array_iterator_first_next_;
	iterator->reset_position = chunk_dyn_array_bw_iterator_reset_position;
	iterator->at_start = chunk_dyn_array_fw_iterator_at_end;
	iterator->at_end = chunk_dyn_array_fw_iterator_at_start;
	iterator->position = (iterator->array->count > 0
						 ? iterator->array->count - 1
						 : 0);
}
