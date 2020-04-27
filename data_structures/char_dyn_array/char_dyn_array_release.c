/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_release.c         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_release.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_release.c#+#    #+#             */
/*   Updated: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_release.c###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

void	char_dyn_array_release(
			t_char_dyn_array *char_dyn_array)
{
	chunk_dyn_array_release(
		(t_chunk_dyn_array*)char_dyn_array);
}
