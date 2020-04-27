/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_set_elt.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 13:18:48 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 14:41:33 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"
#include "libft.h"

bool	chunk_dyn_array_set_elt(t_chunk_dyn_array	*cda
							, void 					*elt
							, size_t				idx)
{
	if (!chunk_dyn_array_enlarge(cda, idx))
		return (false);
	ft_memcpy(cda->memory + idx * cda->chunk_size, elt, cda->chunk_size);
	if (cda->count <= idx)
		cda->count = idx + 1;
	return (true);
}
