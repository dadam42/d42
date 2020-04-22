/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:40:50 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 18:38:13 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

bool	dyn_array_set(
			t_dyn_array *dyn_array
			, t_dyn_array_index index
			, void *element)
{
	size_t	size;

	if (index >= dyn_array->size)
	{
		size = dyn_array->size;
		while (1)
		{
			size *= 2;
			if (size > index)
				break ;
		}
		if (!dyn_array_inc_enlarge(dyn_array, size - dyn_array->size))
			return (false);
	}
	dyn_array->element[index] = element;
	return (true);
}
