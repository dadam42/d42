/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 15:39:17 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 20:19:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_H
# define ITERATOR_H
# include "iterator_int.h"

void	iterator_init(
				t_iterator	*iterator
				, t_iterator_initer *initer);
void	iterator_reset_position(
							t_iterator	*iterator);
bool	iterator_next(
							t_iterator	*iterator);
void	*iterator_deref(
							t_iterator	*iterator);
bool	iterator_at_start(
							t_iterator	*iterator);
bool	iterator_at_end(
							t_iterator	*iterator);
#endif
