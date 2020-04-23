/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_int.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 15:34:47 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 21:53:13 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_COLLECTION_INT_H
# define ARRAY_COLLECTION_INT_H
# define ARRAY_COLLECTION_INIT_SIZE 2
# include "dyn_array.h"
# include "stack.h"
# include <stddef.h>

typedef size_t			t_array_collection_size;
typedef unsigned short	t_array_collection_state;
typedef enum			u_array_collection_state_flag
{
	array_collection_handle_rtag = 1
	, array_collection_handle_removed = 2
}						t_array_collection_state_flag;

typedef	struct			s_array_collection
{
	t_array_collection_state	state;
	void						*rtag;
	t_dyn_array					slot;
	t_stack						*removed;
	t_array_collection_size		count;
}						t_array_collection;

bool					array_collection_add_in_removed(
									t_array_collection	*array_collection
									, void				*element);
bool					array_collection_add_in_removed(
									t_array_collection	*array_collection
									, void				*element);
#endif
