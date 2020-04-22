/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 17:14:16 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:50:38 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
 
void	stack_init(t_stack *stack, void *realisation)
{
	stack->realisation = realisation;
}

void	*stack_peek(t_stack *stack)
{
	return (stack->peek(stack->realisation));
}

void	stack_pop(t_stack *stack)
{
	stack->pop(stack->realisation);
}

void	stack_release(t_stack *stack)
{
	stack->release(stack->realisation);
}

t_stack_size	stack_size(t_stack *stack)
{
	return (stack->size(stack->realisation));
}

bool			stack_enstack(t_stack *stack, void *element)
{
	return (stack->enstack(stack->realisation, element));
}
