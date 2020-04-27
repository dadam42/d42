/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack_pop.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 23:57:10 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:40:53 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_stack.h"

void	array_stack_pop(t_array_stack *array_stack)
{
	if (array_stack->count > 0)
		array_stack->count--;
}

void	array_stack_pop_as_stack(void *array_stack)
{
	array_stack_pop((t_array_stack*)array_stack);
}
