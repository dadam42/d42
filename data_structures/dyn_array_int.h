/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_int.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 14:02:43 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 03:18:23 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_ARRAY_INT_H
# define DYN_ARRAY_INT_H
# include <stdbool.h>
# include <stddef.h>

typedef	size_t				t_dyn_array_index;
typedef void**				t_dyn_array_addr;
typedef struct s_dyn_array	t_dyn_array;

struct						s_dyn_array
{
	void				**element;
	size_t				size;
	size_t				used;
};

typedef struct				s_dyn_array_iterator
{
	t_dyn_array				*dyn_array;
	t_dyn_array_index		cur;
}							t_dyn_array_iterator;

bool						dyn_array_mult_enlarge(
								t_dyn_array		*dyn_array, int factor);
bool						dyn_array_inc_enlarge(
								t_dyn_array		*dyn_array, int increment);
#endif
