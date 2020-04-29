/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_bw_iterator_reset_positio          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 19:51:58 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array_int.h"

void	chunk_dyn_array_bw_iterator_reset_position(
			t_chunk_dyn_array_iterator *iterator)
{
	iterator->position = (iterator->array->count > 0
						 ? iterator->array->count - 1
						 : 0);
}