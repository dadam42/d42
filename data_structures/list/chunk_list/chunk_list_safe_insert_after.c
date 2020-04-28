/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_safe_insert_after.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 09:07:55 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 09:40:51 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

t_list	*chunk_list_safe_insert_after(t_chunk_list *list
									, t_list *position
									, void *elt
									, t_chunk_list_com *com)
{
	t_list	*new;
	t_list	*next;

	new = chunk_list_new_node(list, elt);
	if (!new)
	{
		*com = chunk_list_mem_error;
		return (0);
	}
	list->count++;
	next = position->next;
	position->next = new;
	new->new = next;
}
