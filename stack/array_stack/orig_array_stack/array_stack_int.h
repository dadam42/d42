/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack_int.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 00:02:01 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 17:38:30 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_STACK_INT_H
# define ARRAY_STACK_INT_H
# include "dyn_array.h"
# include "stack.h"

typedef struct s_array_stack	t_array_stack;

struct							s_array_stack
{
	t_dyn_array			array;
	t_stack_size		count;
};

void			*array_stack_peek_as_stack(void *stack);
void			array_stack_pop_as_stack(void *stack);
t_stack_size	array_stack_size_as_stack(void *stack);
bool			array_stack_enstack_as_stack(void *stack, void *enstacked);
void			array_stack_release_as_stack(void *stack);
#endif
