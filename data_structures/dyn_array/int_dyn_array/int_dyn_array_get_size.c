/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_get_size.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 20:33:33 by damouyal          #+#    #+#             */
/*   Updated: 2020/03/26 20:33:33 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

size_t	int_dyn_array_get_size(
			t_int_dyn_array *int_dyn_array)
{
	return (chunk_dyn_array_get_size(
			(t_chunk_dyn_array*)int_dyn_array));
}
