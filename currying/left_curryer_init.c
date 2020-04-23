/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left_curryer_init.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 14:04:31 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 14:21:06 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "curry.h"

void	left_curryer_init(t_curryer *curryer
							, t_to_curry to_curry
							, void *value)
{
	curryer->to_curry = to_curry;
	curryer->value_blocked = value;
	curryer->_curryed = curryer_block_left;
}
