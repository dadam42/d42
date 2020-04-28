/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_iterator_deref.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 13:54:05 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 13:55:19 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.h"

void	**chunk_list_iterator_deref(t_chunk_list_iterator *iterator)
{
	return (&iterator->position->content);
}
