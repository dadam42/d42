/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_get_fw_iterator.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:41:41 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:41:41 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

void	char_dyn_array_get_fw_iterator(
			t_char_dyn_array *da
			, t_char_dyn_array_iterator *itor)
{
	chunk_dyn_array_get_fw_iterator(
		&da->chunk_dyn_array, &itor->itor);
}
