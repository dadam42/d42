/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_get_bw_iterator.c :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_get_bw_iterator.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: r.c>                                     #+#    #+#             */
/*   Updated: r.c>                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

void	char_dyn_array_get_bw_iterator(
			t_char_dyn_array *da
			, t_char_dyn_array_iterator *itor)
{
	chunk_dyn_array_get_bw_iterator(
		&da->chunk_dyn_array, &itor->itor);
}
