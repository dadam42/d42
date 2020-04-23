/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 03:09:41 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/23 03:32:01 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"
#include <stdio.h>

int main()
{
	t_dyn_array dyn_array;
	dyn_array_init(&dyn_array, 3);
	char *_str = "toto";
	dyn_array_set(&dyn_array, 0, _str);
	char *str = dyn_array_get_elt(&dyn_array, 0);
	printf("%s\n", str);
	dyn_array_release(&dyn_array);
	return (0);
}
