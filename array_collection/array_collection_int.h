/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection_int.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 15:34:47 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/21 19:04:37 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_COLLECTION_INT_H
# define ARRAY_COLLECTION_INT_H
# include "dyn_array.h"
# include "stack.h"
# include <stddef.h>

typedef size_t	t_array_collection_size;
typedef	struct	s_array_collection
{
	void					*rtag;
	t_dyn_array				slot;
	t_stack					removed;
	t_array_collection_size	count;
}				t_array_collection;
#endif
