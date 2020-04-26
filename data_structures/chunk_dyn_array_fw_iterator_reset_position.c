/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_fw_iterator_reset_positio          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 17:24:46 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array_int.h"

void	chunk_dyn_array_fw_iterator_reset_position(
			t_chunk_dyn_array_iterator *iterator)
{
	iterator->position = 0;
}
