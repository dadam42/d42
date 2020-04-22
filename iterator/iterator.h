/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 15:39:17 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/21 23:16:21 by damouyal         ###   ########.fr       */
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
}							t_iterator;
#endif
