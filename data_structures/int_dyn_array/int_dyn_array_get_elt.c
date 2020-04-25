/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_get_elt.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 18:31:03 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 18:31:05 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

int	int_dyn_array_get_elt(
			t_int_dyn_array *int_dyn_array
			, size_t idx)
{
	int	ret;

	chunk_dyn_array_get_elt(
			(t_chunk_dyn_array*)int_dyn_array
			, idx
			, &ret);
	return (ret);
}
