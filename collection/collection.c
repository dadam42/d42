/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 19:03:21 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:24:34 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "collection.h"

void	colletion_init(t_collection *collection, void *realisation)
{
	collection->realisation = realisation;
}

bool	collection_add(t_collection *collection)
{
	return (collection->add(collection));
}

void	collection_remove(t_collection *collection, void* element)
{
	collection->remove(collection, element);
}

bool	collection_contents(t_collection *collection, void *element)
{
	return (collection->contents(collection, element))
}

void	collection_release(t_collection *collection)
{
	collection->release(collection);
}
