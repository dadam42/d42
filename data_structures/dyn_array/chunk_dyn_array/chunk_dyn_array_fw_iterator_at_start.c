/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_fw_iterator_at_start.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 17:24:42 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 21:50:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

bool	chunk_dyn_array_fw_iterator_at_start(
			t_iterator *iterator)
{
	return (((t_chunk_dyn_array_iterator*)iterator)->position == 0
		&& ((t_chunk_dyn_array_iterator*)iterator)->array->count > 0);
}
