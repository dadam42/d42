/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auto_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 17:58:04 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 18:09:01 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

void	auto_stack_init(t_stack *stack, void *realisation)
{
	stack->realisation = realisation;
	stack->_release = auto_stack_release;
}

void	auto_stack_release(void *stack)
{
	((t_stack*)stack)->release(((t_stack*)stack)->realisation);
	free(((t_stack*)stack)->realisation);
}
