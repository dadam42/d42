/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_fw_iterator_at_end.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:39 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 21:49:06 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

bool	chunk_dyn_array_fw_iterator_at_end(
			t_iterator *iterator)
{
	if (((t_chunk_dyn_array_iterator*)iterator)->array->count <= 1)
		return (true);
	return (((t_chunk_dyn_array_iterator*)iterator)->position
			== ((t_chunk_dyn_array_iterator*)iterator)->array->count - 1);
}
