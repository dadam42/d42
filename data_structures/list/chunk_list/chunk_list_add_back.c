/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_add_back.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 08:28:08 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 08:28:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

t_list	*chunk_list_add_back(t_chunk_list *list
								, void *elt)
{
	t_list *new;

	new = chunk_list_new_node(list, elt);
	if (new)
	{
		ft_lstadd_back(&list->start, new);
		list->count++;
	}
	return (new);
}
