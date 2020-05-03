/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_get_bw_iterator.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:45:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:45:45 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

void	int_dyn_array_get_bw_iterator(
			t_int_dyn_array *da
			, t_int_dyn_array_iterator *itor)
{
	chunk_dyn_array_get_bw_iterator(
		&da->chunk_dyn_array, &itor->itor);
}
