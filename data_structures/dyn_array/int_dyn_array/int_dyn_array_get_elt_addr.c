/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_get_elt_addr.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:45:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:45:45 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

int	*int_dyn_array_get_elt_addr(
			t_int_dyn_array *int_dyn_array
			, size_t idx)
{
	return ((int*)chunk_dyn_array_get_elt_addr(
			(t_chunk_dyn_array*)int_dyn_array
			, idx));
}
