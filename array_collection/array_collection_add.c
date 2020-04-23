/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_add.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 16:14:42 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 22:58:33 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_collection_int.h"

bool	array_collection_add_in_removed(t_array_collection *array_collection
									, void *element)
{
		*((void **)stack_peek(array_collection->removed)) = element;
		stack_pop(array_collection->removed);
		array_collection->count++;
		return (true);
}

bool	array_collection_add_out_removed(t_array_collection *array_collection
									, void *element)
{
	
		bool ret;

		ret = dyn_array_set(&array_collection->slot
							, array_collection->count, element);
		if (ret)
			array_collection->count++;
		return (ret);
}

bool	array_collection_add(t_array_collection *array_collection
									, void	*element)
{
	if (stack_size(array_collection->removed) > 0)
		return (array_collection_add_in_removed(array_collection, element));
	else
		return (array_collection_add_out_removed(array_collection, element));
}
