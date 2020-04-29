/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_iterator_deref.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:35:14 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 19:49:06 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	*chunk_dyn_array_iterator_deref(
							t_chunk_dyn_array_iterator *iterator)
{
	return (chunk_dyn_array_get_elt_addr(iterator->array, iterator->position));
}
