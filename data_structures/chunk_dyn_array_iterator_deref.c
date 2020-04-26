/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_iterator_deref.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:35:14 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 18:41:58 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	*chunk_dyn_array_iterator_deref(
							t_chunk_dyn_array_iterator *iterator)
{
	return (iterator->deref(iterator));
}
