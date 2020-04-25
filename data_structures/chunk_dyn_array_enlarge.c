/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_enlarge.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 13:26:14 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 14:30:29 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array_int.h"
#include "libft.h"
#include <stdlib.h>

bool	chunk_dyn_array_do_enlarge(t_chunk_dyn_array *cda, size_t idx)
{
	void	*nmemory;
	size_t	nsize;

	nsize = cda->size;
	while (1)
	{
		nsize *=2;
		if (nsize > idx)
			break;
	}
	nmemory = malloc(cda->chunk_size * cda->size);
	if (!nmemory)
		return (false);
	ft_memcpy(nmemory, cda->memory, cda->chunk_size * cda->size);
	free(cda->memory);
	cda->memory = nmemory;
	cda->size = nsize;
	return (true);
}

bool	chunk_dyn_array_enlarge(t_chunk_dyn_array *cda, size_t idx)
{
	if (idx > cda->size)
		return (chunk_dyn_array_do_enlarge(cda, idx));
	return (true);
}
