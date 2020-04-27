/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_iterator_next.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:03:14 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 04:56:43 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

void	dyn_array_iterator_next(t_dyn_array_iterator *iterator)
{
	iterator->cur++;
}

void	dyn_array_iterator_next_as_iterator(void *iterator)
{
	dyn_array_iterator_next((t_dyn_array_iterator*)iterator);
}
