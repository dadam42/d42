/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_get_elt_addr.c    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_get_elt_addr.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: >                                        #+#    #+#             */
/*   Updated: >                                       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

void	*char_dyn_array_get_elt_addr(
			t_char_dyn_array *char_dyn_array
			, size_t idx)
{
	return (chunk_dyn_array_get_elt_addr(
			(t_chunk_dyn_array*)char_dyn_array
			, idx));
}
