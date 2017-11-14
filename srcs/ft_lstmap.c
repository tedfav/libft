/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:37:39 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/14 07:05:33 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_l;
	t_list	*tmp;

	new_l = f(lst);
	tmp = new_l;
	while (lst)
	{
		ft_lstadd(&new_l, f(lst));
		if (new_l == NULL)
		{
			ft_lstdel(&tmp, &ft_del_content);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_l);
}
