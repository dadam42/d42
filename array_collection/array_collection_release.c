/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_release.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:28:11 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 21:42:08 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_collection.h"
#include <stdlib.h>

void	array_collection(t_array_collection *array_collection)
{
	if (array_collection->state & array_collection_handle_rtag)
		free(array_collection->rtag);
	if (array_collection->state & array_collection_handle_removed)
		free(array_collection->removed);
	dyn_array_release(&array_collection->slot);
}
