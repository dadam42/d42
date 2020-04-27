/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack_init_stack.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 23:59:12 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/24 05:19:51 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_stack.h"

static void	array_stack_init_stack_actions(t_array_stack *array_stack
									, t_stack *stack)
{
	(void)array_stack;
	stack->peek = array_stack_peek_as_stack;
	stack->pop = array_stack_pop_as_stack;
	stack->enstack = array_stack_enstack_as_stack;
	stack->release = array_stack_release_as_stack;
	stack->size = array_stack_size_as_stack;
}

void		array_stack_init_stack(t_array_stack *array_stack
								, t_stack *stack)
{
	stack_init(stack, (void*)array_stack);
	array_stack_init_stack_actions(array_stack, stack);
}

void		array_stack_init_auto_stack(t_array_stack *array_stack
								, t_stack *stack)
{
	auto_stack_init(stack, (void*)array_stack);
	array_stack_init_stack_actions(array_stack, stack);
}
