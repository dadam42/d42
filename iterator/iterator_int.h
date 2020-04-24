/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator_int.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 03:46:23 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:22:57 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITERATOR_INT_H
# define ITERATOR_INT_H
# include <stdbool.h>
typedef struct s_iterator	t_iterator;

struct						s_iterator
{
	bool	handle_realisation;
	void	*realisation;
	void	(*next)(void*);
	void	*(*deref)(void*);
	void	(*release)(void*);
	bool	(*reached_end)(void*);
};

void	iterator_noop_release(void *realisation);
#endif