/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_iterator_deref.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:54:54 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:57:00 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

void	**vs_dyn_array_iterator_deref(
			t_vs_dyn_array_iterator *itor)
{
	return ((void**)chunk_dyn_array_iterator_deref(
											&itor->itor));
}
