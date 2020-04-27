/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_release.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:41:41 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:41:41 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

void	char_dyn_array_release(
			t_char_dyn_array *char_dyn_array)
{
	chunk_dyn_array_release(
		(t_chunk_dyn_array*)char_dyn_array);
}
