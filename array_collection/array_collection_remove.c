/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_remove.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 15:58:35 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/21 19:58:57 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_collection_int.h"

void	array_collection_remove(
					t_array_collection *array_collection
					, void *element)
{
	t_dyn_array_index	curdx;
	void				*curelt;

	cur = 0;
	while (curdx < array_collection->slot.size)
	{
		curelt = dyn_array_get(&array_collection->slot, curdx);
		if (curelt == element)
		{
			stack_enstack(&array_collection->removed
						, dyn_array_get_addr(&array_collection->slot, curdx));
			dyn_array_set(&array_collection->slot, curdx, array_collection->rtag);
			array_collection->count--;
			break;
		}
		curdx++;
	}
}
