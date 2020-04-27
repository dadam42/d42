/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_dyn_array_release.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <dadamouyal42@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/25 13:07:22 by damouyal          #+#    #+#             */
/*   Updated: 2020/04/25 13:08:45 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chunk_dyn_array.h"
#include <stdlib.h>

void	chunk_dyn_array_release(t_chunk_dyn_array *cda)
{
	free(cda->memory);
}
