/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_init.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 13:24:23 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/24 19:15:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_collection.h"
#include <stdlib.h>
#include "array_stack.h"

static bool	array_collection_init_removed(t_array_collection *array_collection
										, t_stack *stack
										, t_array_collection_state *state)
{
	t_array_stack 	*def_stack;

	if (!stack)
	{
		def_stack = malloc(sizeof(t_array_stack));
		if (!def_stack)
			return (false);
		stack = malloc(sizeof(t_stack));
		if (!stack)
		{
			free(def_stack);
			return (false);
		}
		array_stack_init(def_stack);
		array_stack_init_auto_stack(def_stack, stack);
		*state += array_collection_handle_removed;
	}
	array_collection->initer.removed = stack;
	return (true);
}

static bool	array_collection_init_rtag(t_array_collection *array_collection
									, void *rtag
									, t_array_collection_state *state)
{
	
	if (!rtag)
	{
		rtag = malloc(sizeof(bool));
		if (!rtag)
			return (false) ;
		*state += array_collection_handle_rtag;
	}
	array_collection->initer.rtag = rtag;
	return (true);
}

static void	array_collection_init__release(
							t_array_collection *array_collection
							, t_array_collection_state state)
{
	static t_array_collection_release release[] =
	{array_collection__release_noop, array_collection__release_rtag
	 , array_collection__release_removed, array_collection__release_full};

	array_collection->_release = release[state];
}

bool		array_collection_init(t_array_collection *array_collection
							,t_array_collection_initer *initer)
{
	bool						ret;
	t_array_collection_state	state;

	while (1)
	{
		ret = dyn_array_init(&array_collection->slot
				, ARRAY_COLLECTION_INIT_SIZE);
		if (!ret)
			break ;
		ret = false;
		state = 0;
		if (!array_collection_init_removed(array_collection
										, initer->removed, &state))
			break ;
		if (!array_collection_init_rtag(array_collection
										, initer->rtag, &state))
			break ;
		array_collection->count = 0;
		array_collection_init__release(array_collection, state);
		ret = true;
		break;
	}
	return (ret);
}
