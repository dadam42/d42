/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_dyn_array_iterator_at_start.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:53:53 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:53:53 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

bool	char_dyn_array_iterator_at_start(
			t_char_dyn_array_iterator *itor)
{
	return (chunk_dyn_array_iterator_at_start(&itor->itor));
}
