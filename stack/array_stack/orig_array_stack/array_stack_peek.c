/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack_peek.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 23:56:00 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:39:40 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_stack.h"

void	*array_stack_peek(t_array_stack *array_stack)
{
	return (array_stack->array.element[array_stack->count - 1]);
}

void	*array_stack_peek_as_stack(void *array_stack)
{
	return (array_stack_peek((t_array_stack*)array_stack));
}
