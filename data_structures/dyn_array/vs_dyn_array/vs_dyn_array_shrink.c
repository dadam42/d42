/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_shrink.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 03:32:32 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/05 03:32:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

bool	vs_dyn_array_shrink(
			t_vs_dyn_array *vs_dyn_array)
{
	return (chunk_dyn_array_shrink(
		(t_chunk_dyn_array*)vs_dyn_array));
}
