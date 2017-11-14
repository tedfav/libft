#include "libft.h"

void		*ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*elem;
	t_list	*last;

	if (!(elem = ft_create_elem(data)))
		return (NULL);
	last = *begin_list;
	while (last->next != NULL)
		last = last->next;
	last->next = elem;
}