/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_get_prev_node.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 08:06:42 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 08:49:17 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

t_list	*chunk_list_get_prev_node(t_chunk_list *list
								, t_list	*list
								, t_chunk_com *com)
{
	t_list	*prev;
	t_list	*cur;

	cur = list->start;
	*com = chunk_list_ok;
	if (cur == list)
		return (0)
	while (cur)
	{
		prev = cur;
		cur = cur->next;
		if (cur == list)
			return (prev);
	}
	*com = chunk_out_of_range_error;
	return (0);
}
