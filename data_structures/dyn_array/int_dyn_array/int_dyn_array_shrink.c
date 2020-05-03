/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_shrink.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:45:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:45:45 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

bool	int_dyn_array_shrink(
			t_int_dyn_array *int_dyn_array)
{
	return (chunk_dyn_array_shrink(
		(t_chunk_dyn_array*)int_dyn_array));
}
