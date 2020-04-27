/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_get_elt.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 15:15:25 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 04:30:35 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

void	*dyn_array_get_elt(t_dyn_array *dyn_array, t_dyn_array_index index)
{
	if (index < dyn_array->size)
		return (dyn_array->element[index]);
	return (0);
}
