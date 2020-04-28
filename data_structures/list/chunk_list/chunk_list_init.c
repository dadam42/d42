/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 07:45:22 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 08:27:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

void	chunk_list_init(
			t_chunk_list *list
			,  size_t chunk_size)
{
	list->count = 0;
	list->chunk_size = chunk_size;
	list->start = 0;
}
