/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_dyn_array_get_elt.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:52:52 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:52:52 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bool_dyn_array.h"

bool	bool_dyn_array_get_elt(
			t_bool_dyn_array *bool_dyn_array
			, size_t idx)
{
	bool	ret;

	chunk_dyn_array_get_elt(
			(t_chunk_dyn_array*)bool_dyn_array
			, idx
			, &ret);
	return (ret);
}
