/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_iterator_reset_position.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:53:53 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:53:53 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

void	char_dyn_array_iterator_reset_position(
					t_char_dyn_array_iterator *itor)
{
	chunk_dyn_array_iterator_reset_position(&itor->itor);
}
