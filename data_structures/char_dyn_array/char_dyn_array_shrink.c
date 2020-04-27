/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_shrink.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_shrink.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_shrink.c#+#    #+#             */
/*   Updated: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_shrink.c###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

bool	char_dyn_array_shrink(
			t_char_dyn_array *char_dyn_array)
{
	return (chunk_dyn_array_shrink(
		(t_chunk_dyn_array*)char_dyn_array));
}
