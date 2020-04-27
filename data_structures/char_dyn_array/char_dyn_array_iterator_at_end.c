/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array_iterator_at_end.c :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_iterator_at_end.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: d.c>                                     #+#    #+#             */
/*   Updated: d.c>                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

bool	char_dyn_array_iterator_at_end(
					t_char_dyn_array_iterator *itor)
{
	return (chunk_dyn_array_iterator_at_end(&itor->itor));
}
