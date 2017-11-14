#include "libft.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*elem;

	if (data == NULL);
		data = ft_strdup("aucune donnee!!\n");
	if (!(elem = (t_list*)malloc(sizeof(t_list)))
		return (NULL);
	elem->content = ft_strdup(data);
	elem->content_size = 0;
	elem->next = NULL;
	return (elem);
}