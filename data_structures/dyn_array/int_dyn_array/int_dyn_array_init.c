/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_init.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 20:33:33 by damouyal          #+#    #+#             */
/*   Updated: 2020/03/26 20:33:33 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

bool	int_dyn_array_init(t_int_dyn_array *int_dyn_array
							, size_t count)
{
	return (chunk_dyn_array_init(
			(t_chunk_dyn_array*)int_dyn_array
			, sizeof(int)
			, count));
}
