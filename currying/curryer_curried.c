/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curryer_curried.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 14:29:37 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 14:53:15 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "curry.h"

void	curryer__curryed(bool set_or_apply, void *value)
{
	static t_curryer *curryer;

	if (!set_or_apply)
		curryer = (t_curryer*)value;
	else
		curryer_curry(curryer, value);
}

void	curryer_curryed(void *value)
{
		curryer__curryed(true,  value);
}

void	curryer_prepare_curryed(t_curryer *curryer)
{
	curryer__curryed(false, curryer);
}

t_curryed	curryer_get_curryed(t_curryer *curryer)
{
	curryer__curryed(false, curryer);
	return (curryed_curryed);
}
