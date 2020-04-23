/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curry.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 12:57:00 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 14:57:13 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURRY_H
# define CURRY_H
# include "curry_int.h"

void		left_curryer_init(t_curryer*	curryer
						, t_to_curry	to_curry
						, void			*left_value);
void		right_curryer_init(t_curryer*	curryer
						, t_to_curry	to_curry
						, void			*right_value);
void		curryer_curry(t_curryer			*curryer
					, void				*value);
t_curryed	curryer_get_curryed(t_curryer *curryer);
void		
#endif
