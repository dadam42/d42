/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_stack.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 16:59:36 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 18:15:50 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_STACK_H
# define ARRAY_STACK_H
# define STACK_ARRAY_INIT_SIZE 2
# include "array_stack_int.h"

bool			array_stack_init(t_array_stack *array_stack);
void			*array_stack_peek(t_array_stack *array_stack);
void			array_stack_pop(t_array_stack *array_stack);
t_stack_size	array_stack_size(t_array_stack *array_stack);
bool			array_stack_enstack(t_array_stack *array_stack
									, void *enstacked);
void			array_stack_release(t_array_stack *array_stack);
void			array_stack_init_stack(t_array_stack *array_stack
										, t_stack *stack);
void			array_stack_init_auto_stack(t_array_stack *array_stack
										, t_stack *stack);
#endif
