/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:45:56 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 18:45:59 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_ARRAY_H
# define DYN_ARRAY_H
# define MIN_INIT_SIZE 1
# include "dyn_array_int.h"
typedef	size_t	t_dyn_array_index;
typedef void**	t_dyn_array_addr;

bool			dyn_array_init(
					t_dyn_array			*dyn_array
					, size_t			size);
bool			dyn_array_set(
					t_dyn_array			*dyn_array
					, t_dyn_array_index	index
					, void				*element);
void			*dyn_array_get_elt(
					t_dyn_array			*dyn_array
					, t_dyn_array_index	index);
t_dyn_array_addr	dyn_array_get_addr(
					t_dyn_array			*dyn_array
					, t_dyn_array_index	index);
void			dyn_array_release(
					t_dyn_array *dyn_array);
#endif
