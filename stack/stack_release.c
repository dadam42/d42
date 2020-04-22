/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_release.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 16:56:37 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/21 16:58:42 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include <stdlib.h>

void	stack_free_release(t_stack *stack)
{
	free(stack->realisation);
}

void	stack_noop_release(t_stack *stack)
{
	(void)stack;
}
