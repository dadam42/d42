/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack_release.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 00:19:08 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:44:06 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_stack.h"

void	array_stack_release(t_array_stack *array_stack)
{
	dyn_array_release(&array_stack->array);
}

void	array_stack_release_as_stack(void *array_stack)
{
	array_stack_release((t_array_stack*)array_stack);
}
