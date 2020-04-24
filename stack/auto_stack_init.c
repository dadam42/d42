/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_stack_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 17:58:04 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 18:05:08 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	auto_stack_init(t_stack *stack, void *realisation)
{
	stack->realisation = realisation;
	stack->_release = auto_stack_release;
}
