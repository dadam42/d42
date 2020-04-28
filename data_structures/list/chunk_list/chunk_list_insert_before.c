/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_insert_before.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 08:06:42 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 09:27:14 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

t_list	*chunk_list_insert_before(t_chunk_list *list
								, t_list *position
								, void *elt
								, t_chunk_list_com *com)
{
	t_list *prev;

	prev = chunk_list_get_prev_node(list, position, com);
	if (prev == 0)
	{
		if (*com != chunk_list_ok)
			return (0);
		prev = chunk_list_add_front(list, elt);
		if (prev == 0)
			*com = chunk_list_mem_err;
		return (prev);
	}
	return (chunk_list_safe_insert_after(list, prev, elt, com));
}
