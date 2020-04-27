/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ../char_dyn_array/char_dyn_array.h                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array.h>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array.h#+#    #+#             */
/*   Updated: 2020/03/27 02:18:18 by ../char_dyn_array/char_dyn_array.h###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_DYN_ARRAY_H
# define CHAR_DYN_ARRAY_H
# include "chunk_dyn_array.h"
# include <stddef.h>
!d42inclusion

typedef struct	s_char_dyn_array
{
	t_chunk_dyn_array	chunk_dyn_array;
}				t_char_dyn_array;

/*
** Basic actions
*/

bool			char_dyn_array_init(
					t_char_dyn_array *char_dyn_array
					, size_t	count);
bool			char_dyn_array_set_elt(
					t_char_dyn_array *char_dyn_array
					, size_t	idx
					, char		elt);
void			*char_dyn_array_get_elt_addr(
					t_char_dyn_array *char_dyn_array
					, size_t	idx);
char			char_dyn_array_get_elt(
					t_char_dyn_array *char_dyn_array
					, size_t idx);
size_t			char_dyn_array_get_size(
					t_char_dyn_array *char_dyn_array);
bool			char_dyn_array_shrink(
					t_char_dyn_array *char_dyn_array);
void			char_dyn_array_release(
					t_char_dyn_array *char_dyn_array);

/*
** Iterators
*/

typedef struct	s_char_dyn_array_iterator
{
	t_chunk_dyn_array_iterator itor;
}				t_char_dyn_array_iterator;

void			char_dyn_array_get_fw_iterator(
					t_char_dyn_array			*da
					, t_char_dyn_array_iterator	*itor);
void			char_dyn_array_get_bw_iterator(
					t_char_dyn_array			*da
					, t_char_dyn_array_iterator	*itor);
void			char_dyn_array_iterator_reset_position(
					t_char_dyn_array_iterator	*itor);
void			char_dyn_array_iterator_next(
					t_char_dyn_array_iterator	*itor);
char			*char_dyn_array_iterator_deref(
					t_char_dyn_array_iterator	*itor);
bool			char_dyn_array_iterator_at_start(
					t_char_dyn_array_iterator	*itor);
bool			char_dyn_array_iterator_at_end(
					t_char_dyn_array_iterator	*itor);
#endif
