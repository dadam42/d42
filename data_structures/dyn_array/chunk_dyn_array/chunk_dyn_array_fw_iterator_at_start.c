/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_fw_iterator_at_start.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:42 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 19:41:42 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

bool	chunk_dyn_array_fw_iterator_at_start(
			t_chunk_dyn_array_iterator *iterator)
{
	return (iterator->position == 0 && iterator->array->count > 0);
}
