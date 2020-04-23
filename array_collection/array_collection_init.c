/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_init.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 13:24:23 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 23:05:19 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_collection.h"
#include <stdlib.h>
#include "array_stack.h"

static bool	array_collection_init_removed(t_array_collection *array_collection
										, t_stack *stack)
{

	t_array_stack 	def_stack;

	if (!stack)
	{
		if (!array_stack_init(&def_stack))
			return (false);
		array_collection->state += array_collection_handle_removed;
		array_stack_init_stack(&def_stack, stack);
	}
	array_collection->removed = stack;
	return (true);
}

static bool	array_collection_init_rtag(t_array_collection *array_collection
									, void *rtag)
{
	
	if (!rtag)
	{
		rtag = malloc(sizeof(bool));
		if (!rtag)
			return (false) ;
		array_collection->state += array_collection_handle_rtag;
	}
	array_collection->rtag = rtag;
	return (true);
}

bool		array_collection_init(t_array_collection *array_collection
							,t_stack *stack, void *rtag)
{
	bool	ret;

	while (1)
	{
		ret = dyn_array_init(&array_collection->slot
				, ARRAY_COLLECTION_INIT_SIZE);
		if (!ret)
			break ;
		ret = false;
		array_collection->state = 0;
		if (array_collection_init_removed(array_collection, stack))
			break ;
		if (array_collection_init_rtag(array_collection, rtag))
			break ;
		array_collection->count = 0;
		ret = true;
	}
	return (ret);
}
