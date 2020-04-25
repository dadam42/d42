/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 12:50:15 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 17:55:48 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_DYN_ARRAY_H
# define CHUNK_DYN_ARRAY_H
# include "chunk_dyn_array_int.h"

bool	chunk_dyn_array_init(t_chunk_dyn_array			*cda
							, size_t					chunk_size
							, size_t					count);
void	chunk_dyn_array_release(t_chunk_dyn_array		*cda);
bool	chunk_dyn_array_set_elt(t_chunk_dyn_array		*cda
							, void 						*addr
							, size_t					idx);
void	*chunk_dyn_array_get_elt_addr(t_chunk_dyn_array	*cda
							, size_t					idx);
void	chunk_dyn_array_get_elt(t_chunk_dyn_array	*cda
							, size_t				idx
							, void					*addr);
#endif
