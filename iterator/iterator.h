/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 15:39:17 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 23:26:22 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_H
# define ITERATOR_H

typedef struct s_iterator	t_iterator;

struct						s_iterator
{
	void	*realisation;
	void	(*next)(t_iterator*);
	void	*(*deref)(t_iterator*);
	void	(*release)(t_iterator*);
}							t_iterator;

void	iterator_init(t_iterator *iterator, void *realisation);
void	iterator_next(t_iterator *iterator);
void	*iterator_deref(t_iterator *iterator);
void	iterator_release(t_iterator *iterator);
#endif
