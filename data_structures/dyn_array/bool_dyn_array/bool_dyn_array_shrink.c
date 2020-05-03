/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_dyn_array_shrink.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:52:52 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:52:52 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bool_dyn_array.h"

bool	bool_dyn_array_shrink(
			t_bool_dyn_array *bool_dyn_array)
{
	return (chunk_dyn_array_shrink(
		(t_chunk_dyn_array*)bool_dyn_array));
}
