/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_dyn_array_init.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:37:37 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:37:37 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bool_dyn_array.h"

bool	bool_dyn_array_init(t_bool_dyn_array *bool_dyn_array
							, size_t count)
{
	return (chunk_dyn_array_init(
			(t_chunk_dyn_array*)bool_dyn_array
			, sizeof(bool)
			, count));
}
