/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_int.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 17:21:53 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 18:05:41 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_INT_H
# define STACK_INT_H
# include <stddef.h>
# include <stdbool.h>

typedef	size_t			t_stack_size;

typedef struct s_stack	t_stack;
struct					s_stack
{

	void			*realisation;
	void 			*(*peek)(void*);
	void 			(*pop)(void*);
	void			(*_release)(void*);
	void			(*release)(void*);
	bool			(*enstack)(void*, void*);
	t_stack_size	(*size)(void*);
};

void	stack_free_release(t_stack *stack);
void	stack_noop_release(t_stack *stack);
void	auto_stack_release(void *stack);
#endif
