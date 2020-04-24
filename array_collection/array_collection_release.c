/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_release.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:28:11 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 19:28:15 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_collection.h"
#include <stdlib.h>

void	array_collection_release(t_array_collection *array_collection)
{
	array_collection->_release(array_collection);
	dyn_array_release(&array_collection->slot);
}

void	array_collection__release_noop(t_array_collection *array_collection)
{
	(void)array_collection;
}

void	array_collection__release_rtag(t_array_collection *array_collection)
{
	free(array_collection->initer.rtag);
}

void	array_collection__release_removed(t_array_collection *array_collection)
{
	free(array_collection->initer.removed);
}

void	array_collection__release_full(t_array_collection *array_collection)
{
	free(array_collection->initer.rtag);
	free(array_collection->initer.removed);
}
