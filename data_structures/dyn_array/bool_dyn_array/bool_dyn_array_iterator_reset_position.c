/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_dyn_array_iterator_reset_position.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:52:52 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:52:52 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bool_dyn_array.h"

void	bool_dyn_array_iterator_reset_position(
					t_bool_dyn_array_iterator *itor)
{
	chunk_dyn_array_iterator_reset_position(&itor->itor);
}
