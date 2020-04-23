/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curryer_block_right.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 13:59:36 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 14:04:12 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "curry_int.h"

void	curryer_block_left(t_curryer *curryer
						, void* fvalue)

{
	curryer->to_curry(fvalue, curryer->value_blocked);
}
