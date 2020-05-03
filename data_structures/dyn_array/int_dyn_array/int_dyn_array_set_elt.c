/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_set_elt.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:45:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:45:45 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

bool	int_dyn_array_set_elt(
					t_int_dyn_array *int_dyn_array
					, size_t idx
					, int elt)
{
	return (chunk_dyn_array_set_elt(
			(t_chunk_dyn_array*)int_dyn_array
			, (void*)(&elt)
			, idx));
}
