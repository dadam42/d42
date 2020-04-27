/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_iterator_at_start.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_iterator_at_start.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: art.c>                                   #+#    #+#             */
/*   Updated: art.c>                                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

bool	char_dyn_array_iterator_at_start(
			t_char_dyn_array_iterator *itor)
{
	return (chunk_dyn_array_iterator_at_start(&itor->itor));
}
