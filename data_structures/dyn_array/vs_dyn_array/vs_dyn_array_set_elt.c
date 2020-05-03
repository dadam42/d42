/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_set_elt.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:54:54 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 19:23:38 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

bool	vs_dyn_array_set_elt(
					t_vs_dyn_array *vs_dyn_array
					, size_t idx
					, void *elt)
{
	if (!chunk_dyn_array_enlarge(
		&vs_dyn_array->chunk_dyn_array, idx))
		return (false);
	*(((void**)vs_dyn_array->chunk_dyn_array.memory)
		+ idx) = elt;
	if (cda->count <= idx)
		cda->count = idx + 1;
	return (true);
}
