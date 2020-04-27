/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_get_elt_addr.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 13:53:21 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 14:25:28 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	*chunk_dyn_array_get_elt_addr(t_chunk_dyn_array	*cda
									, size_t idx)
{
	if (idx < cda->count)
		return (cda->memory + idx * cda->chunk_size);
	return (0);
}
