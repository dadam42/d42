/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bool_dyn_array.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:52:52 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:52:52 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOOL_DYN_ARRAY_H
# define BOOL_DYN_ARRAY_H
# include "chunk_dyn_array.h"
# include <stddef.h>

typedef struct	s_bool_dyn_array
{
	t_chunk_dyn_array	chunk_dyn_array;
}				t_bool_dyn_array;

/*
** Basic actions
*/

bool			bool_dyn_array_init(
					t_bool_dyn_array *bool_dyn_array
					, size_t	count);
void			bool_dyn_array_release(
					t_bool_dyn_array *bool_dyn_array);
bool			bool_dyn_array_set_elt(
					t_bool_dyn_array *bool_dyn_array
					, size_t	idx
					, bool		elt);
bool			*bool_dyn_array_get_elt_addr(
					t_bool_dyn_array *bool_dyn_array
					, size_t	idx);
bool			bool_dyn_array_get_elt(
					t_bool_dyn_array *bool_dyn_array
					, size_t idx);
size_t			bool_dyn_array_get_size(
					t_bool_dyn_array *bool_dyn_array);
bool			bool_dyn_array_shrink(
					t_bool_dyn_array *bool_dyn_array);

/*
** Iterators
*/

typedef struct	s_bool_dyn_array_iterator
{
	t_chunk_dyn_array_iterator itor;
}				t_bool_dyn_array_iterator;

void			bool_dyn_array_get_fw_iterator(
					t_bool_dyn_array			*da
					, t_bool_dyn_array_iterator	*itor);
void			bool_dyn_array_get_bw_iterator(
					t_bool_dyn_array			*da
					, t_bool_dyn_array_iterator	*itor);
void			bool_dyn_array_iterator_reset_position(
					t_bool_dyn_array_iterator	*itor);
bool			bool_dyn_array_iterator_next(
					t_bool_dyn_array_iterator	*itor);
bool			*bool_dyn_array_iterator_deref(
					t_bool_dyn_array_iterator	*itor);
bool			bool_dyn_array_iterator_at_start(
					t_bool_dyn_array_iterator	*itor);
bool			bool_dyn_array_iterator_at_end(
					t_bool_dyn_array_iterator	*itor);
#endif
