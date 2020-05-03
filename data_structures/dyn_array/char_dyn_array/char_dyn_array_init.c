/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_init.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:53:53 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:53:53 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

bool	char_dyn_array_init(t_char_dyn_array *char_dyn_array
							, size_t count)
{
	return (chunk_dyn_array_init(
			(t_chunk_dyn_array*)char_dyn_array
			, sizeof(char)
			, count));
}
