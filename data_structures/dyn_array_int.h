/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_int.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 14:02:43 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 18:18:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_ARRAY_INT_H
# define DYN_ARRAY_INT_H
# include <stdbool.h>
# include <stddef.h>

typedef struct s_dyn_array	t_dyn_array;

struct						s_dyn_array
{
	void				**element;
	size_t				size;
};

bool						dyn_array_mult_enlarge(
								t_dyn_array		*dyn_array, int factor);
bool						dyn_array_inc_enlarge(
								t_dyn_array		*dyn_array, int increment);
#endif
