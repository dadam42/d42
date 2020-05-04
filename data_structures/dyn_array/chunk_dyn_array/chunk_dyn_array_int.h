/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_int.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 13:12:44 by damouyal          #+#    #+#             */
/*   Updated: 2020/05/04 21:58:01 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_DYN_ARRAY_INT_H
# define CHUNK_DYN_ARRAY_INT_H
# include <stddef.h>
# include <stdbool.h>
# include "iterator.h"

/*
** Base
*/

enum	e_chunk_dyn_array_conf
{
	chunk_dyn_array_min_size = 2
};

typedef struct s_chunk_dyn_array	t_chunk_dyn_array;

struct	s_chunk_dyn_array
{
	void	*memory;
	size_t	chunk_size;
	size_t	count;
	size_t	size;
};

bool	chunk_dyn_array_enlarge(
			t_chunk_dyn_array		*cda
			, size_t				idx);
bool	chunk_dyn_array_do_enlarge(
			t_chunk_dyn_array		*cda
			, size_t				idx);

/*
** Iterators
*/

typedef struct s_chunk_dyn_array_iterator	t_chunk_dyn_array_iterator;

struct	s_chunk_dyn_array_iterator
{
	t_iterator			iterator;
	t_chunk_dyn_array	*array;
	size_t				position;
};

/*
** Type specific iterators' members 
*/

void	chunk_dyn_array_fw_iterator_next(
								t_iterator	*iterator);
void	chunk_dyn_array_fw_iterator_reset_position(
								t_iterator	*iterator);
bool	chunk_dyn_array_fw_iterator_at_end(
								t_iterator	*iterator);
bool	chunk_dyn_array_fw_iterator_at_start(
								t_iterator	*iterator);
void	chunk_dyn_array_bw_iterator_next(
								t_iterator	*iterator);
void	chunk_dyn_array_bw_iterator_reset_position(
								t_iterator	*iterator);
void	*chunk_dyn_array_iterator_deref_as_iterator(
								t_iterator	*iterator);
#endif
