#ifndef CHUNK_LIST_H
# define CHUNK_LIST_H
# include "libft.h"
# include <stddef.h>

typedef enum e_chunk_list_com	t_chunk_list_com;
enum	e_chunk_list_com
{
	chunk_list_ok, 
	chunk_list_mem_error,
	chunk_list_out_of_range_error	
};

typedef struct s_chunk_list	t_chunk_list;
struct	s_chunk_list
{
	size_t	chunk_size;
	size_t	count;
	t_list	*start;
};

t_list	*chunk_list_new_node(
				t_chunk_list *list
				, void *elt);
t_list	*chunk_list_get_prev_node(
				t_chunk_list *list
				, t_list *node
				, t_chunk_list_com *com);
/*
** Basic actions
*/

void	chunk_list_init(
			t_chunk_list	*list,
			size_t			chunk_size);
void	chunk_list_release(
			t_chunk_list *list);
t_list	*chunk_list_add_front(
			t_chunk_list	*list
			, void			*elt);
t_list	*chunk_list_add_back(
			t_chunk_list	*list
			, void			*elt);
t_list	*chunk_list_insert_before(
			t_chunk_list		*list
			, t_list			*position
			, t_chunk_list_com	*err);
t_list	*chunk_list_insert_after(
			t_chunk_list		*list
			, t_list			*position
			, void				*elt
			, t_chunk_list_com	*err);
t_list	*chunk_list_safe_insert_after(
			t_chunk_list	*list
			, t_list		*position
			, void			*elt);
size_t	chunk_list_get_size(
			t_chunk_list		*list);


/*
** Iterators
*/

typedef struct s_chunk_list_iterator	t_chunk_list_iterator;
struct	s_chunk_list_iterator
{
	t_chunk_list	*chunk_list;
	t_list			*position;
	void			(*next)
						(t_chunk_list_iterator *);
	bool			(*at_start)
						(t_chunk_list_iterator *);
	bool			(*at_end)
						(t_chunk_list_iterator	*);
};

//

void	chunk_list_get_fw_iterator(
							t_chunk_list				*list
							, t_chunk_list_iterator	*iterator);
void	chunk_list_get_bw_iterator(
							t_chunk_list				*list
							, t_chunk_list_iterator	*iterator);
void	chunk_list_iterator_reset_position(
							t_chunk_list_iterator		*iterator);
void	chunk_list_iterator_next(
							t_chunk_list_iterator		*iterator);
void	**chunk_list_iterator_deref(
							t_chunk_list_iterator		*iterator);
bool	chunk_list_iterator_at_start(
							t_chunk_list_iterator		*iterator);
bool	chunk_list_iterator_at_end(
							t_chunk_list_iterator		*iterator);
#endif	
