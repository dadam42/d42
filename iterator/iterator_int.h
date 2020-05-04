/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_int.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 03:46:23 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 20:40:07 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_INT_H
# define ITERATOR_INT_H
# include <stdbool.h>
typedef struct s_iterator	t_iterator;

struct						s_iterator
{
	bool				(*next_)(
							t_iterator*);
	void				(*next)(
							t_iterator*);
	void				(*reset_position_)(
							t_iterator*);
	void				(*reset_position)(
							t_iterator*);
	bool				(*at_end)(
							t_iterator*);
	bool				(*at_start)(
							t_iterator*);
	void				*(*deref)(
							t_iterator*);
};

typedef struct s_iterator_initer	t_iterator_initer;
struct s_iterator_initer
{
	void				(*next)(
							t_iterator*);
	void				(*reset_position)(
							t_iterator*);
	bool				(*at_end)(
							t_iterator*);
	bool				(*at_start)(
							t_iterator*);
	void				*(*deref)(
							t_iterator*);
};

/*
** Private iterators' members
*/

bool	iterator_first_next_(
			t_iterator	*iterator);
bool	iterator_inloop_next_(
			t_iterator	*iterator);
bool	iterator_noop_next_(
			t_iterator	*iterator);
void	iterator_reset_position_(
			t_iterator *iterator);
#endif
