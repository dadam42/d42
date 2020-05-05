/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_get_elt_addr.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 03:32:32 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/05 03:32:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

void	**vs_dyn_array_get_elt_addr(
			t_vs_dyn_array *vs_dyn_array
			, size_t idx)
{
	return ((void**)chunk_dyn_array_get_elt_addr(
			(t_chunk_dyn_array*)vs_dyn_array
			, idx));
}
