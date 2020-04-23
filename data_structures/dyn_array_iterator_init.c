/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_iterator_init.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 23:44:46 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 04:12:20 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

void	dyn_array_iterator_init(t_dyn_array_iterator *iterator
							, t_dyn_array *dyn_array)
{
	iterator->dyn_array = dyn_array;
	iterator->cur = 0;
}
