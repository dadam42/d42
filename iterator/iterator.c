/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 23:23:18 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:25:04 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iterator.h"
#include <stdlib.h>

void	iterator_init(t_iterator *iterator
					, void *realisation
					, bool handle_realisation)
{
	iterator->realisation = realisation;
	iterator->handle_realisation = handle_realisation;
}

void	iterator_next(t_iterator *iterator)
{
	iterator->next(iterator->realisation);
}

void	*iterator_deref(t_iterator *iterator)
{
	return (iterator->deref(iterator->realisation));
}

void	iterator_release(t_iterator *iterator)
{
	iterator->release(iterator->realisation);
	if (iterator->handle_realisation)
		free(iterator->realisation);
}

bool	iterator_reached_end(t_iterator *iterator)
{
	return (iterator->reached_end(iterator->realisation));
}
