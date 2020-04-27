/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack_size.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 23:57:40 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:55:59 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_stack.h"

t_stack_size	array_stack_size(t_array_stack *array_stack)
{
	return (array_stack->count);
}

t_stack_size	array_stack_size_as_stack(void *array_stack)
{
	return (array_stack_size((t_array_stack*)array_stack));
}
