/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 12:50:15 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/27 21:48:20 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_DYN_ARRAY_H
# define CHUNK_DYN_ARRAY_H
# include "chunk_dyn_array_int.h"


/*
** Basic actions
*/

bool	chunk_dyn_array_init(
							t_chunk_dyn_array				*cda
							, size_t						chunk_size
							, size_t						count);
void	chunk_dyn_array_release(
							t_chunk_dyn_array				*cda);
bool	chunk_dyn_array_set_elt(
							t_chunk_dyn_array				*cda
							, void 							*elt
							, size_t						idx);
void	*chunk_dyn_array_get_elt_addr(
							t_chunk_dyn_array				*cda
							, size_t						idx);
void	chunk_dyn_array_get_elt(t_chunk_dyn_array			*cda
							, size_t						idx
							, void							*elt);
size_t	chunk_dyn_array_get_size(
							t_chunk_dyn_array				*cda);
bool	chunk_dyn_array_shrink(
							t_chunk_dyn_array				*cda);
/*
** Iterators
*/

void	chunk_dyn_array_get_fw_iterator(
							t_chunk_dyn_array				*cda
							, t_chunk_dyn_array_iterator	*iterator);
void	chunk_dyn_array_get_bw_iterator(
							t_chunk_dyn_array				*cda
							, t_chunk_dyn_array_iterator	*iterator);
void	chunk_dyn_array_iterator_reset_position(
							t_chunk_dyn_array_iterator		*iterator);
void	chunk_dyn_array_iterator_next(
							t_chunk_dyn_array_iterator		*iterator);
void	*chunk_dyn_array_iterator_deref(
							t_chunk_dyn_array_iterator		*iterator);
bool	chunk_dyn_array_iterator_at_start(
							t_chunk_dyn_array_iterator		*iterator);
bool	chunk_dyn_array_iterator_at_end(
							t_chunk_dyn_array_iterator		*iterator);
#endif
