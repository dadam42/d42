/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_get_elt.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_get_elt.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_get_elt.c#+#    #+#             */
/*   Updated: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_get_elt.c###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

char	char_dyn_array_get_elt(
			t_char_dyn_array *char_dyn_array
			, size_t idx)
{
	char	ret;

	chunk_dyn_array_get_elt(
			(t_chunk_dyn_array*)char_dyn_array
			, idx
			, &ret);
	return (ret);
}
