/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curryer_curry.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 14:22:34 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 14:23:43 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "curry.h"

void	curryer_curry(t_curryer *curryer
					, void	*value)
{
	curryer->_curryed(curryer, value);
}
