/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_iterator_deref.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 20:33:33 by damouyal          #+#    #+#             */
/*   Updated: 2020/03/26 20:33:33 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

int	*int_dyn_array_iterator_deref(
			t_int_dyn_array_iterator *itor)
{
	return ((int*)chunk_dyn_array_iterator_deref(
											&itor->itor));
}
