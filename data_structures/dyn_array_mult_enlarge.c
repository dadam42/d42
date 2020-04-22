/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dyn_array_mult_enlarge.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/20 12:46:22 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/22 18:36:53 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dyn_array.h"
#include "libft.h"
#include <stdlib.h>

bool	dyn_array_mult_enlarge(t_dyn_array *dyn_array, int factor)
{
	void	**element;

	element = malloc(dyn_array->size * factor * sizeof(void*));
	if (!element)
		return (false);
	ft_memcpy(element, dyn_array->element, sizeof(void*)
				* dyn_array->size);
	dyn_array->element = element;
	dyn_array->size *= factor;
	return (true);
}
