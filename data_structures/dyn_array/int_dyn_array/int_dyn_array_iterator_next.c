/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array_iterator_next.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:45:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:45:45 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "int_dyn_array.h"

bool	int_dyn_array_iterator_next(
			t_int_dyn_array_iterator *itor)
{
	return (chunk_dyn_array_iterator_next(&itor->itor));
}
