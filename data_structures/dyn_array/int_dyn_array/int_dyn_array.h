/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 18:45:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 18:48:42 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_DYN_ARRAY_H
# define INT_DYN_ARRAY_H
# include "chunk_dyn_array.h"
# include <stddef.h>

typedef struct	s_int_dyn_array
{
	t_chunk_dyn_array	chunk_dyn_array;
}				t_int_dyn_array;

/*
** Basic actions
*/

bool			int_dyn_array_init(
					t_int_dyn_array *int_dyn_array
					, size_t	count);
void			int_dyn_array_release(
					t_int_dyn_array *int_dyn_array);
bool			int_dyn_array_set_elt(
					t_int_dyn_array *int_dyn_array
					, size_t	idx
					, int		elt);
int				*int_dyn_array_get_elt_addr(
					t_int_dyn_array *int_dyn_array
					, size_t	idx);
int				int_dyn_array_get_elt(
					t_int_dyn_array *int_dyn_array
					, size_t idx);
size_t			int_dyn_array_get_size(
					t_int_dyn_array *int_dyn_array);
bool			int_dyn_array_shrink(
					t_int_dyn_array *int_dyn_array);

/*
** Iterators
*/

typedef struct	s_int_dyn_array_iterator
{
	t_chunk_dyn_array_iterator itor;
}				t_int_dyn_array_iterator;

void			int_dyn_array_get_fw_iterator(
					t_int_dyn_array			*da
					, t_int_dyn_array_iterator	*itor);
void			int_dyn_array_get_bw_iterator(
					t_int_dyn_array			*da
					, t_int_dyn_array_iterator	*itor);
void			int_dyn_array_iterator_reset_position(
					t_int_dyn_array_iterator	*itor);
bool			int_dyn_array_iterator_next(
					t_int_dyn_array_iterator	*itor);
int				*int_dyn_array_iterator_deref(
					t_int_dyn_array_iterator	*itor);
bool			int_dyn_array_iterator_at_start(
					t_int_dyn_array_iterator	*itor);
bool			int_dyn_array_iterator_at_end(
					t_int_dyn_array_iterator	*itor);
#endif
