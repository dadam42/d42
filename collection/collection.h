/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   collection.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 11:41:55 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 19:24:01 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLLECTION_H
# define COLLECTION_H
# include <stdbool.h>
# include <stddef.h>

typedef	struct s_collection		t_collection;

struct							s_collection
{
	void				*realisation;
	bool 				(*add)(t_collection*, void*);
	void 				(*remove)(t_collection*, void*);
	bool				(*contents)(t_collection*, void*);
	void				(*release)(t_collection*);
	size_t				count;
};

void	collection_init(t_collection *collection, void *realisation);
bool	collection_add(t_collection *collection);
void	collection_remove(t_collection *collection, void* element);
bool	collection_contents(t_collection *collection, void *element);
void	collection_release(t_collection *collection);
#endif
