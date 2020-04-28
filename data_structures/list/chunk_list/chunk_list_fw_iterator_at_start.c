/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_fw_iterator_at_start.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 14:12:01 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 14:12:02 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

bool	chunk_list_fw_iterator_at_start(t_chunk_list_iterator *iterator)
{
	return (iterator->position == iterator->chunk_list->start);
}
