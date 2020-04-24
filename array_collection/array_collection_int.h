/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_int.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 15:34:47 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 19:27:03 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_COLLECTION_INT_H
# define ARRAY_COLLECTION_INT_H
# define ARRAY_COLLECTION_INIT_SIZE 2
# include "dyn_array.h"
# include "stack.h"
# include <stddef.h>

typedef size_t						t_array_collection_size;
typedef	struct s_array_collection	t_array_collection;
typedef enum						u_array_collection_state
{
	array_collection_handle_rtag = 1
	, array_collection_handle_removed = 2
}									t_array_collection_state;

typedef struct						s_array_collection_initer
{
	t_stack				*removed;
	void				*rtag;
}									t_array_collection_initer;

typedef	void						(*t_array_collection_release)(
												t_array_collection*);
struct								s_array_collection
{
	t_array_collection_initer	initer;
	t_dyn_array					slot;
	t_array_collection_size		count;
	t_array_collection_release	_release;
};

bool								array_collection_add_in_removed(
											t_array_collection	*array_collection
											, void				*element);
bool								array_collection_add_in_removed(
											t_array_collection	*array_collection
											, void				*element);
void								array_collection__release_noop(
											t_array_collection	*array_collection);
void								array_collection__release_rtag(
											t_array_collection	*array_collection);
void								array_collection__release_removed(
											t_array_collection	*array_collection);
void								array_collection__release_full(
											t_array_collection	*array_collection);
#endif
