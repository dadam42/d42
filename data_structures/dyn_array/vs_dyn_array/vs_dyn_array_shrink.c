/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_shrink.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:54:54 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:54:54 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

bool	vs_dyn_array_shrink(
			t_vs_dyn_array *vs_dyn_array)
{
	return (chunk_dyn_array_shrink(
		(t_chunk_dyn_array*)vs_dyn_array));
}
