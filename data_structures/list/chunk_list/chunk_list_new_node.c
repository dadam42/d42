/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_new_node.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 08:18:17 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 08:20:38 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"
#include <stdlib.h>

t_list	*chunk_list_new_node(t_chunk_list *list
								, void *elt);
{
	t_list *new;

	while (1)
	{
		new = malloc(sizeof(t_list));
		if (!new)
			break ;
		new->content = malloc(list->chunk_size);
		if (!new->content)
		{
			free(new);
			break ;
		}
		ft_memcpy(new->content, elt, list->chunk_size);
		return (new);
	}
	return (0);
}
