/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_add_front.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 08:06:42 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 08:26:34 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

t_list	*chunk_list_add_front(t_chunk_list *list
								, void *elt)
{
	t_list *new;

	new = chunk_list_new_node(list, elt);
	if (new)
	{
		ft_lstadd_front(&list->start, new);
		list->count++;
	}
	return (new);
}
