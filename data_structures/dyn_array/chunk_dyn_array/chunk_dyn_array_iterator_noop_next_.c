/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_iterator_noop_next_.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 14:56:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 16:24:13 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"

bool	chunk_dyn_array_iterator_noop_next_(
			t_chunk_dyn_array_iterator	*iterator)
{
	(void)iterator;
	return (false);
}
