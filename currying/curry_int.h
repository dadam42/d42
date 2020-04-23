/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curry_int.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 13:53:57 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 14:54:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURRRY_INT_H
# define CURRY_INT_H

typedef void				(*t_to_curry)(void*, void*);
typedef struct s_curryer	t_curryer;
typedef void				(*t__curryed)(t_curryer*, void*);
typedef void				(t_curryed)(void*);
struct						s_curryer
{
	void		*value_blocked;
	t_to_curry	to_curry;
	t__curryed	_curryed;
};

void						curryer_block_left(t_curryer *curryer, void*);
void						curryer_block_right(t_curryer *curryer, void*);
void						curryer_curried(void *curryer);
void						curryer_init_curried(t_curryer *curryer);
void						curryer_init(t_curryer *curryer);
#endif

