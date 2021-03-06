/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_iterator_at_start.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 18:37:01 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 22:09:41 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

bool	chunk_dyn_array_iterator_at_start(
							t_chunk_dyn_array_iterator *iterator)
{
	return (iterator_at_start(&iterator->iterator));
}
