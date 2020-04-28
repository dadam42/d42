/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_list_iterator_next.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/28 13:34:36 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/28 13:35:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_list.c"

void	chunk_list_iterator_next(t_chunk_list_iterator *iterator)
{
	iterator->next(iterator);
}
