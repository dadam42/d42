/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_get_elt_addr.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:00:00 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:00:00 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

void	*vs_dyn_array_get_elt_addr(
			t_vs_dyn_array *vs_dyn_array
			, size_t idx)
{
	return (chunk_dyn_array_get_elt_addr(
			(t_chunk_dyn_array*)vs_dyn_array
			, idx));
}
