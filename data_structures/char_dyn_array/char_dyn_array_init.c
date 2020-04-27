/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_init.c            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_init.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_init.c#+#    #+#             */
/*   Updated: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array_init.c###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

bool	char_dyn_array_init(t_char_dyn_array *char_dyn_array
							, size_t count)
{
	return (chunk_dyn_array_init(
			(t_chunk_dyn_array*)char_dyn_array
			, sizeof(char)
			, count));
}
