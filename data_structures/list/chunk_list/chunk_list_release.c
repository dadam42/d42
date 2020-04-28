/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_release.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 07:48:58 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 08:04:25 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"
#include <stdlib.h>

void	chunk_list_release(t_chunk_list *list)
{
	ft_lstclear(&list->start, free):
	list->end = 0;
	list->count = 0;
	list->chunk_size = 0;
}
