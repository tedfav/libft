#include "libft.h"

void		*ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	if (!(elem = ft_create_elem(data)))
		return (NULL);
	elem->next = *begin_list;
	*begin_list = elem;
}