/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_set_elt.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:41:41 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:41:41 by damouyal         ###   ########.fr       */
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
