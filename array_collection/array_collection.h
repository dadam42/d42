/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_collection.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 16:16:45 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 22:59:33 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_COLLECTION_H
# define ARRAY_COLLECTION_H
# include "array_collection_int.h"
# include <stdbool.h>

bool			array_collection_init(
					t_array_collection	*array_collection
					, t_stack *stack, void *rtag);
void			array_collection_remove(
							t_array_collection	*array_collection
							, void				*element);
bool			array_collection_add(
							t_array_collection	*array_collection
							, void				*element);
bool			array_collection_contents(
							t_array_collection	*array_collection
							, void				*element);
void			array_collection_release(
							t_array_collection *array_collection);
#endif
