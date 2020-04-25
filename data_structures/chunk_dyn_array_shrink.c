/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_shrink.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 14:12:16 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 14:31:15 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array_int.h"
#include "libft.h"
#include <stdlib.h>

bool	chunk_dyn_array_shrink(t_chunk_dyn_array		*cda)
{
	size_t	size;
	void	*memory;

	size = chunk_dyn_array_min_size;
	if (cda->count > size)
		size = cda->count;
	memory = malloc(size * cda->chunk_size);
	if (!memory)
		return (false);
	ft_memcpy(memory, cda->memory, size * cda->chunk_size);
	free(cda->memory);
	cda->memory = memory;
	cda->size = size;
	return (true);
}
