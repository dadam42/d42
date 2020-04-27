/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_init.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 12:56:42 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 22:33:25 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"
#include "chunk_dyn_array_int.h"
#include <stdlib.h>

bool		chunk_dyn_array_init(t_chunk_dyn_array *cda
							, size_t chunk_size, size_t count)
{
	cda->size = 0;
	cda->memory = 0;
	cda->count = count;
	cda->chunk_size = chunk_size;
	return (chunk_dyn_array_do_enlarge(cda, count));
}
