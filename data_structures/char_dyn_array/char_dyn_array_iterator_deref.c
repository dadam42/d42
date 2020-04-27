/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_iterator_deref.c  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_iterator_deref.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: .c>                                      #+#    #+#             */
/*   Updated: .c>                                     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

char	*char_dyn_array_iterator_deref(
			t_char_dyn_array_iterator *itor)
{
	return ((char*)chunk_dyn_array_iterator_deref(
											&itor->itor));
}
