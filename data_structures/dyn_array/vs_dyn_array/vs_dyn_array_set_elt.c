/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_set_elt.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:00:00 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:08:06 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

bool	vs_dyn_array_set_elt(
					t_vs_dyn_array *vs_dyn_array
					, size_t idx
					, void *elt)
{
	return (chunk_dyn_array_set_elt(
			(t_chunk_dyn_array*)vs_dyn_array
			, (void*)(&elt)
			, idx));
}
