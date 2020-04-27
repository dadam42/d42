/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_dyn_array_iterator_deref.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:37:37 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:37:37 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bool_dyn_array.h"

bool	*bool_dyn_array_iterator_deref(
			t_bool_dyn_array_iterator *itor)
{
	return ((bool*)chunk_dyn_array_iterator_deref(
											&itor->itor));
}
