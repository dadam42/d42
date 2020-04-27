/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_iterator_next.c   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_iterator_next.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: c>                                       #+#    #+#             */
/*   Updated: c>                                      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

void	char_dyn_array_iterator_next(
			t_char_dyn_array_iterator *itor)
{
	chunk_dyn_array_iterator_next(&itor->itor);
}
