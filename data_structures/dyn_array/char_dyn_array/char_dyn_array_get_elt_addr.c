/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_get_elt_addr.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:53:53 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:53:53 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

char	*char_dyn_array_get_elt_addr(
			t_char_dyn_array *char_dyn_array
			, size_t idx)
{
	return ((char*)chunk_dyn_array_get_elt_addr(
			(t_chunk_dyn_array*)char_dyn_array
			, idx));
}
