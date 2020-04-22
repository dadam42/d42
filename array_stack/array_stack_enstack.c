/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack_enstack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 23:58:17 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:42:33 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_stack.h"

bool	array_stack_enstack(t_array_stack *array_stack
							, void *enstacked)
{
	bool ret;

	ret = dyn_array_set(&array_stack->array, array_stack->count, enstacked);
	if (ret)
		array_stack->count++;
	return (ret);
}

bool	array_stack_enstack_as_stack(void *array_stack
							, void *enstacked)
{
	return (array_stack_enstack((t_array_stack*)array_stack, enstacked));
}
