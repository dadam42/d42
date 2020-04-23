/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 23:23:18 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 23:26:53 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iterator.h"

void	iterator_init(t_iterator *iterator, void *realisation)
{
	iterator->realisation = realisation;
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
}
