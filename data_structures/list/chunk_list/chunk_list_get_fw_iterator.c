/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_get_fw_iterator.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 13:56:36 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 14:03:02 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_iterator.h"

void	chunk_list_get_fw_iterator(t_chunk_list *list
									, t_chunk_list_iterator *iterator)
{
	iterator->chunk_list = list;
	iterator->position = chunk_list->start;
	
}
