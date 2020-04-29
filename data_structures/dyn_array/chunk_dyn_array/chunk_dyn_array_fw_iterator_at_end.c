/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_fw_iterator_at_end.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:39 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 19:36:40 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

bool	chunk_dyn_array_fw_iterator_at_end(
			t_chunk_dyn_array_iterator *iterator)
{
	if (iterator->array->count <= 1)
		return (true);
	return (iterator->position == iterator->array->count - 1);
}
