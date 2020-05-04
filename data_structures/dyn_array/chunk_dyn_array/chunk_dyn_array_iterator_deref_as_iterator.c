/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_iterator_deref_as_iterato          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 21:54:39 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 22:16:03 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

void	*chunk_dyn_array_iterator_deref_as_iterator(t_iterator *iterator)
{
	return (chunk_dyn_array_get_elt_addr(
		((t_chunk_dyn_array_iterator*)iterator)->array
		, ((t_chunk_dyn_array_iterator*)iterator)->position));
}
