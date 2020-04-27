/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_iterator_deref.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:41:41 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:41:41 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

char	*char_dyn_array_iterator_deref(
			t_char_dyn_array_iterator *itor)
{
	return ((char*)chunk_dyn_array_iterator_deref(
											&itor->itor));
}
