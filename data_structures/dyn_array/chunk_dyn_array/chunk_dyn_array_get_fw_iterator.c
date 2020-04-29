/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_get_fw_iterator.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:35 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 19:49:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	chunk_dyn_array_get_fw_iterator(
			t_chunk_dyn_array *cda
			, t_chunk_dyn_array_iterator *iterator)
{
	iterator->array = cda;
	iterator->next = chunk_dyn_array_fw_iterator_next;
	iterator->next_ = chunk_dyn_array_iterator_first_next_;
	iterator->reset_position = chunk_dyn_array_fw_iterator_reset_position;
	iterator->at_start = chunk_dyn_array_fw_iterator_at_start;
	iterator->at_end = chunk_dyn_array_fw_iterator_at_end;
	iterator->position = 0;
}
