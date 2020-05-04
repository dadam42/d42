/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_bw_iterator_next.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:54 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 21:52:54 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array_int.h"

void	chunk_dyn_array_bw_iterator_next(
			t_iterator *iterator)
{
	((t_chunk_dyn_array_iterator*)iterator)->position--;
}
