/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 03:09:41 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 05:52:38 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"
#include <stdio.h>
#define LSTR 12


void	my_print(void *str)
{
	printf("%s\n", (char*)str);
}

void	dyn_array_iterator(t_dyn_array *dyn_array)
{
	
	t_dyn_array_iterator iterator;
	t_dyn_array_index cur;

	dyn_array_iterator_init(&iterator, dyn_array);
	cur = 0;
	while(!dyn_array_iterator_reached_end(&iterator))
	{
		printf("%ld : %s\n", cur, (char*)dyn_array_iterator_deref(&iterator));
		dyn_array_iterator_next(&iterator);
		cur++;
	}
}

void	iterator(t_dyn_array *dyn_array)
{
	t_dyn_array_iterator da_iterator;
	t_iterator	iterator;

	dyn_array_iterator_init(&da_iterator, dyn_array);
	dyn_array_iterator_init_fw_iterator(&da_iterator, &iterator);
	iterator_apply(&iterator, my_print);
}

int main()
{
	char *str[LSTR] = {"a", "b", "cc",  "ddd", "e", "fff", "ggg", "h"
					, "ii", "jjjj", "kkkkk", "ll"};
	t_dyn_array dyn_array;
	dyn_array_init(&dyn_array, 3);
	t_dyn_array_index cur = 0;
	while (cur < LSTR)
	{
		dyn_array_set(&dyn_array, cur, str[cur]);
		cur++;
	}
	dyn_array_iterator(&dyn_array);
	iterator(&dyn_array);
	dyn_array_release(&dyn_array);
	return (0);
}
