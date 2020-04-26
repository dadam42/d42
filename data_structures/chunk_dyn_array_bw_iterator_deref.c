/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_bw_iterator_deref.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:51 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 17:29:40 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	*chunk_dyn_array_bw_iterator_deref(
			t_chunk_dyn_array_iterator *iterator)
{
	return (chunk_dyn_array_get_elt_addr(
				iterator->array
				, iterator->position - 1));
}
