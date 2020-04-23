/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_apply.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 05:18:05 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:20:59 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iterator.h"

void	iterator_apply(t_iterator *iterator, void (*apply)(void*))
{
	while (!iterator_reached_end(iterator))
	{
		apply(iterator_deref(iterator));
		iterator_next(iterator);
	}
} 
