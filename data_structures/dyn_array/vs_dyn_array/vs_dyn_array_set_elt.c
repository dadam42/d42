/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_set_elt.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 03:32:32 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/05 03:32:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

bool	vs_dyn_array_set_elt(
					t_vs_dyn_array *tda
					, size_t idx
					, void *elt)
{
	if (!chunk_dyn_array_enlarge(&tda->cda, idx))
		return (false);
	*((void**)tda->cda.memory + idx) = elt;
	if (tda->cda.count <= idx)
		tda->cda.count = idx + 1;
	return (true);
}
