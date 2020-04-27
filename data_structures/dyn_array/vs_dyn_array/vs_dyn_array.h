/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vs_dyn_array.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/27 04:00:00 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 04:09:48 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VS_DYN_ARRAY_H
# define VS_DYN_ARRAY_H
# include "chunk_dyn_array.h"
# include <stddef.h>

typedef struct	s_vs_dyn_array
{
	t_chunk_dyn_array	chunk_dyn_array;
}				t_vs_dyn_array;

/*
** Basic actions
*/

bool			vs_dyn_array_init(
					t_vs_dyn_array *vs_dyn_array
					, size_t	count);
bool			vs_dyn_array_set_elt(
					t_vs_dyn_array *vs_dyn_array
					, size_t	idx
					, void		*elt);
void			*vs_dyn_array_get_elt_addr(
					t_vs_dyn_array *vs_dyn_array
					, size_t	idx);
void			*vs_dyn_array_get_elt(
					t_vs_dyn_array *vs_dyn_array
					, size_t idx);
size_t			vs_dyn_array_get_size(
					t_vs_dyn_array *vs_dyn_array);
bool			vs_dyn_array_shrink(
					t_vs_dyn_array *vs_dyn_array);
void			vs_dyn_array_release(
					t_vs_dyn_array *vs_dyn_array);

/*
** Iterators
*/

typedef struct	s_vs_dyn_array_iterator
{
	t_chunk_dyn_array_iterator itor;
}				t_vs_dyn_array_iterator;

void			vs_dyn_array_get_fw_iterator(
					t_vs_dyn_array			*da
					, t_vs_dyn_array_iterator	*itor);
void			vs_dyn_array_get_bw_iterator(
					t_vs_dyn_array			*da
					, t_vs_dyn_array_iterator	*itor);
void			vs_dyn_array_iterator_reset_position(
					t_vs_dyn_array_iterator	*itor);
void			vs_dyn_array_iterator_next(
					t_vs_dyn_array_iterator	*itor);
void			**vs_dyn_array_iterator_deref(
					t_vs_dyn_array_iterator	*itor);
bool			vs_dyn_array_iterator_at_start(
					t_vs_dyn_array_iterator	*itor);
bool			vs_dyn_array_iterator_at_end(
					t_vs_dyn_array_iterator	*itor);
#endif
