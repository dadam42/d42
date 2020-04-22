/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 16:16:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/21 19:49:40 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_COLLECTION_H
# define ARRAY_COLLECTION_H
# include "array_collection_int.h"
# include <stdbool.h>

bool			array_collection_init(
					t_collection	*collection);
void			array_collection_init_by_dyn_array(
					t_collection	*collection
					, t_dyn_array	*dyn_array);
void			array_collection_remove(
							t_array_collection	*array_collection
							, void				*element);
bool			array_collection_add(
							t_array_collection	*array_collection
							, void				*element);
#endif
