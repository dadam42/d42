/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_iterator_prev.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:09:38 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:49:38 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

void	dyn_array_iterator_prev(t_dyn_array_iterator *iterator)
{
	iterator->cur--;
}

void	dyn_array_iterator_prev_as_iterator(void *iterator)
{
	dyn_array_iterator_prev((t_dyn_array_iterator*)iterator);
}
