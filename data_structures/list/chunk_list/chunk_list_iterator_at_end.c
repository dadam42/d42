/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_iterator_at_end.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 13:36:12 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 14:11:23 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

bool	chunk_list_iterator_at_end(t_chunk_list_iterator *iterator)
{
	return (iterator->at_end(iterator));
}

