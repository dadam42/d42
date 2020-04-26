/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_fw_iterator_next.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:54 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 17:24:57 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array_int.h"

void	chunk_dyn_array_fw_iterator_next(
			t_chunk_dyn_array_iterator *iterator)
{
	iterator->position++;
}
