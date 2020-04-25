/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_release.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 18:31:42 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 18:31:46 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

void	int_dyn_array_release(
			t_int_dyn_array *int_dyn_array)
{
	chunk_dyn_array_release(
		(t_chunk_dyn_array*)int_dyn_array);
}
