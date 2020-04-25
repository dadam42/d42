/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_dyn_array.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 18:30:50 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 23:53:31 by damouyal         ###   ########.fr       */
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

bool			int_dyn_array_init(t_int_dyn_array *int_dyn_array
									, size_t	count);
bool			int_dyn_array_set_elt(t_int_dyn_array *int_dyn_array
									, size_t	idx
									, int		elt);
void			*int_dyn_array_get_elt_addr(t_int_dyn_array *int_dyn_array
									, size_t	idx);
int				int_dyn_array_get_elt(t_int_dyn_array *int_dyn_array
									, size_t idx);
size_t			int_dyn_array_get_size(t_int_dyn_array *int_dyn_array);
bool			int_dyn_array_shrink(t_int_dyn_array *int_dyn_array);
void			int_dyn_array_release(t_int_dyn_array *int_dyn_array);
#endif
