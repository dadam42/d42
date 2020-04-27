/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_get_size.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:41:41 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:41:41 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

size_t	char_dyn_array_get_size(
			t_char_dyn_array *char_dyn_array)
{
	return (chunk_dyn_array_get_size(
			(t_chunk_dyn_array*)char_dyn_array));
}
