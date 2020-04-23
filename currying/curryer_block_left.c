/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   curryer_block_left.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 13:59:36 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 14:01:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "curry_int.h"

void	curryer_block_left(t_curryer *curryer
						, void* fvalue)

{
	curryer->to_curry(curryer->value_blocked, fvalue);
}
