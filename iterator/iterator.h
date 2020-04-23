/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 15:39:17 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:18:40 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_H
# define ITERATOR_H
# include "iterator_int.h"
typedef enum u_iterator_vocab
{
	iterator_pos_end, iterator_pos_begin
}			t_iterator_vocab;

void	iterator_init(
				t_iterator	*iterator
				, void		*realisation
				, bool		handle_realisation);
void	iterator_next(t_iterator *iterator);
bool	iterator_reached_end(t_iterator *iterator);
void	*iterator_deref(t_iterator *iterator);
void	iterator_release(t_iterator *iterator);
void	iterator_apply(t_iterator *iterator, void (*apply)(void*));
#endif
