/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_dyn_array_get_elt_addr.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:52:52 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:52:52 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bool_dyn_array.h"

bool	*bool_dyn_array_get_elt_addr(
			t_bool_dyn_array *bool_dyn_array
			, size_t idx)
{
	return ((bool*)chunk_dyn_array_get_elt_addr(
			(t_chunk_dyn_array*)bool_dyn_array
			, idx));
}
