/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_iterator_deref.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 00:32:48 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 00:34:08 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"

void	*dyn_array_iterator_deref(t_dyn_array_iterator *iterator)
{
	return (dyn_array_get_elt(iterator->dyn_array, iterator->cur));
}
