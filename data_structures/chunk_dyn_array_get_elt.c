/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_get_elt.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 14:05:15 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 14:41:55 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"
#include "libft.h"

void	chunk_dyn_array_get_elt(t_chunk_dyn_array *cda 
								, size_t idx
								, void *elt)
{
	if (idx < cda->count)
		ft_memcpy(elt, cda->memory + idx * cda->chunk_size, cda->chunk_size);
}
