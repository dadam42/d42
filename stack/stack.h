/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 15:55:07 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 18:11:33 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include "stack_int.h"

/*
** Stack interface, to provide a new implementation of stack
** please refer to stack_int.h
*/

/*
** Inits:
** stack has no special abilitie.
** auto_stack will free its realisation when released.
*/

void			stack_init(t_stack *stack, void *realisation);
void			auto_stack_init(t_stack *stack, void *realisation);

/*
** Actions :
*/

void			*stack_peek(t_stack *stack);
void			stack_pop(t_stack *stack);
bool			stack_enstack(t_stack *stack, void* element);
t_stack_size	stack_size(t_stack *stack);
void			stack_release(t_stack *stack);
#endif
