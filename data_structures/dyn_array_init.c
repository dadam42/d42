/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:23:58 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 04:30:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"
#include <stdlib.h>

bool			dyn_array_init(
				t_dyn_array *dyn_array
				, size_t size)
{
	if (size < MIN_INIT_SIZE)
		size = MIN_INIT_SIZE;
	dyn_array->element = malloc(size * sizeof(void*));
	if (!dyn_array->element)
		return (false);
	dyn_array->used = 0;
	dyn_array->size = size;
	return (true);
}
