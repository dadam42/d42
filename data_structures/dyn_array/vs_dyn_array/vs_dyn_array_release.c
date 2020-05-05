/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_release.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/05 03:32:32 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/05 03:32:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

void	vs_dyn_array_release(
			t_vs_dyn_array *vs_dyn_array)
{
	chunk_dyn_array_release(
		(t_chunk_dyn_array*)vs_dyn_array);
}
