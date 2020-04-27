/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 17:44:00 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:54:35 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array_stack.h"
	
bool	array_stack_init(t_array_stack	*array_stack)
{
	array_stack->count = 0;
	return (dyn_array_init(&array_stack->array, STACK_ARRAY_INIT_SIZE));
}
