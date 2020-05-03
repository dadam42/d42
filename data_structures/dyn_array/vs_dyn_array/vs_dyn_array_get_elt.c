/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_get_elt.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:54:54 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:57:53 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

void	*vs_dyn_array_get_elt(
			t_vs_dyn_array *vs_dyn_array
			, size_t idx)
{
	void	*ret;

	chunk_dyn_array_get_elt(
			(t_chunk_dyn_array*)vs_dyn_array
			, idx
			, &ret);
	return (ret);
}
