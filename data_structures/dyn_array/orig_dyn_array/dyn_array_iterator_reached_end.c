/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_iterator_reached_end.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:11:49 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:51:17 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

bool	dyn_array_iterator_reached_end(t_dyn_array_iterator *iterator)
{
	return (iterator->dyn_array->used == iterator->cur);
}

bool	dyn_array_iterator_reached_end_as_iterator(void *iterator)
{
	return (dyn_array_iterator_reached_end((t_dyn_array_iterator*)iterator));
}
