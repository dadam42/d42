/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_get_addr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 19:38:27 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 04:29:56 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

t_dyn_array_addr	dyn_array_get_addr(t_dyn_array *dyn_array
										, t_dyn_array_index index)
{
	if (index < dyn_array->size)
		return (dyn_array->element + index);
	return (0);
}
