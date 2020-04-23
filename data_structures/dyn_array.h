/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:45:56 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:12:49 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYN_ARRAY_H
# define DYN_ARRAY_H
# define MIN_INIT_SIZE 1
# include "dyn_array_int.h"
# include "iterator.h"

bool				dyn_array_init(
						t_dyn_array				*dyn_array
						, size_t				size);
bool				dyn_array_set(
						t_dyn_array				*dyn_array
						, t_dyn_array_index		index
						, void					*element);
void				*dyn_array_get_elt(
						t_dyn_array				*dyn_array
						, t_dyn_array_index		index);
t_dyn_array_addr	dyn_array_get_addr(
						t_dyn_array				*dyn_array
						, t_dyn_array_index		index);
void				dyn_array_release(
						t_dyn_array *dyn_array);
void				dyn_array_iterator_init_fw_iterator(
						t_dyn_array_iterator	*da_iterator
						, t_iterator			*iterator);
void				dyn_array_iterator_init_bw_iterator(
						t_dyn_array_iterator	*da_iterator
						, t_iterator			*iterator);
void				dyn_array_iterator_init(
						t_dyn_array_iterator	*iterator
						, t_dyn_array			*dyn_array);
void				dyn_array_iterator_next(
						t_dyn_array_iterator	*iterator);
void				dyn_array_iterator_prev(
						t_dyn_array_iterator	*iterator);
void				*dyn_array_iterator_deref(
						t_dyn_array_iterator	*iterator);
bool				dyn_array_iterator_reached_end(
						t_dyn_array_iterator	*iterator);
bool				dyn_array_iterator_reached_begin(
						t_dyn_array_iterator	*iterator);
#endif
