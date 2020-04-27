/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_iterator_reached_begin.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:24:26 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:50:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

bool	dyn_array_iterator_reached_begin(t_dyn_array_iterator *iterator)
{
	return (iterator->cur == 0);
}

bool	dyn_array_iterator_reached_begin_as_iterator(void *iterator)
{
	return (dyn_array_iterator_reached_begin((t_dyn_array_iterator*)iterator));
}
