/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_get_bw_iterator.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:00:00 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:00:00 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

void	vs_dyn_array_get_bw_iterator(
			t_vs_dyn_array *da
			, t_vs_dyn_array_iterator *itor)
{
	chunk_dyn_array_get_bw_iterator(
		&da->chunk_dyn_array, &itor->itor);
}
