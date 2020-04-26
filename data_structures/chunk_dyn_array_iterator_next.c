/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_iterator_next.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:43:43 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/26 17:47:40 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	chunk_dyn_array_iterator_next(
							t_chunk_dyn_array_iterator *iterator)
{
	iterator->next(iterator);
}
