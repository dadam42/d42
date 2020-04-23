/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_contents.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:54:13 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 23:02:57 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_collection.h"

bool	array_collection_contents(t_array_collection *array_collection
								, void *element)
{
	t_dyn_array_index	curdx;
	void				*curelt;
	bool				ret;

	curdx = 0;
	ret = false;
	while (curdx < array_collection->slot.size && !ret)
	{
		curelt = dyn_array_get_elt(&array_collection->slot, curdx);
		if (curelt == element)
		{
			ret = true;
			break ;
		}
		curdx++;
	}
	return (ret);
}
