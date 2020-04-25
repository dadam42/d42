/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_int.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 13:12:44 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 14:27:05 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHUNK_DYN_ARRAY_INT_H
# define CHUNK_DYN_ARRAY_INT_H
# include <stddef.h>
# include <stdbool.h>

enum			e_chunk_dyn_array_conf
{
	chunk_dyn_array_min_size = 2
};

typedef struct	s_chunk_dyn_array
{
	void	*memory;
	size_t	chunk_size;
	size_t	count;
	size_t	size;
}				t_chunk_dyn_array;

bool			chunk_dyn_array_enlarge(t_chunk_dyn_array		*cda
										, size_t				idx);
bool			chunk_dyn_array_do_enlarge(t_chunk_dyn_array	*cda
										, size_t				idx);
bool			chunk_dyn_array_shrink(t_chunk_dyn_array		*cda);
#endif
