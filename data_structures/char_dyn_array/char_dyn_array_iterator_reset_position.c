/*   ../char_dyn_array/char_dyn_array_iterator_reset_position.c:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ../char_ <../char_dyn_array/char_dyn_array_iterator_reset_position.c>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: _position.c>                             #+#    #+#             */
/*   Updated: _position.c>                            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char_dyn_array.h"

void	char_dyn_array_iterator_reset_position(
					t_char_dyn_array_iterator *itor)
{
	chunk_dyn_array_iterator_reset_position(&itor->itor);
}
