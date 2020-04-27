/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_set_elt.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_set_elt.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_set_elt.c#+#    #+#             */
/*   Updated: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_set_elt.c###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

bool	char_dyn_array_set_elt(
					t_char_dyn_array *char_dyn_array
					, size_t idx
					, char elt)
{
	return (chunk_dyn_array_set_elt(
			(t_chunk_dyn_array*)char_dyn_array
			, (void*)(&elt)
			, idx));
}
