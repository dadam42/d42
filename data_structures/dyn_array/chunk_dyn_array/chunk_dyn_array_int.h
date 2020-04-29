/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_int.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 13:12:44 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/29 13:46:32 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_DYN_ARRAY_INT_H
# define CHUNK_DYN_ARRAY_INT_H
# include <stddef.h>
# include <stdbool.h>

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

struct s_chunk_dyn_array_iterator
{
	t_chunk_dyn_array	*array;
	size_t				position;
	void				(*next)(
							t_chunk_dyn_array_iterator*);
	bool				(*next_)(
							t_chunk_dyn_array_iterator*);
	void				(*reset_position)(
							t_chunk_dyn_array_iterator*);
	bool				(*at_end)(
							t_chunk_dyn_array_iterator*);
	bool				(*at_start)(
							t_chunk_dyn_array_iterator*);
};

typedef	void	(*t_chunk_dyn_array_iterator_loop_action)(
							t_chunk_dyn_array_iterator *iterator);

bool	chunk_dyn_array_iterator_loop_test(
							t_chunk_dyn_array_iterator *iterator);
void	chunk_dyn_array_iterator_loop_act(
							t_chunk_dyn_array_iterator *iterator
							, t_chunk_dyn_array_iterator_loop_action before
							, t_chunk_dyn_array_iterator_loop_action after);
void	chunk_dyn_array_iterator_loop_act_before(
							t_chunk_dyn_array_iterator_loop_action before);
void	chunk_dyn_array_iterator_loop_act_after(
							t_chunk_dyn_array_iterator *iterator
							, t_chunk_dyn_array_iterator_loop_action after);

/*
** Private iterators' members
*/

bool	chunk_dyn_array_iterator_first_next_(
			t_chunk_dyn_array_iterator	*iterator);
bool	chunk_dyn_array_iterator_inloop_next_(
			t_chunk_dyn_array_iterator	*iterator);
bool	chunk_dyn_array_iterator_noop_next_(
			t_chunk_dyn_array_iterator	*iterator);

/*
** Type specific iterators' members 
*/

void	chunk_dyn_array_fw_iterator_next(
			t_chunk_dyn_array_iterator	*iterator);
void	chunk_dyn_array_fw_iterator_reset_position(
			t_chunk_dyn_array_iterator	*iterator);
bool	chunk_dyn_array_fw_iterator_at_end(
			t_chunk_dyn_array_iterator	*iterator);
bool	chunk_dyn_array_fw_iterator_at_start(
			t_chunk_dyn_array_iterator	*iterator);
void	chunk_dyn_array_bw_iterator_next(
			t_chunk_dyn_array_iterator	*iterator);
void	chunk_dyn_array_bw_iterator_reset_position(
			t_chunk_dyn_array_iterator	*iterator);
#endif
