/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array_iterator_at_start.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:54:54 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:54:54 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vs_dyn_array.h"

bool	vs_dyn_array_iterator_at_start(
			t_vs_dyn_array_iterator *itor)
{
	return (chunk_dyn_array_iterator_at_start(&itor->itor));
}
