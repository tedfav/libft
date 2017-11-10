/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 18:46:38 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/10 10:17:03 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int			ft_trim(char s)
{
	if (s == '\n' || s == '\t' || s == ' ')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	char	*tmp;
	int		i;
	int		len;

	i = 0;
	len = 0;
	tmp = (char*)s;
	if (s == NULL)
		return (NULL);
	while (ft_trim(*tmp) == 1)
		tmp++;
	len = ft_strlen(tmp);
	while (ft_trim(tmp[len - 1]) == 1)
		len--;
	if (ft_strcmp(tmp, "") == 0)
		return (ft_strdup(""));
	if (!(str = (char*)malloc(sizeof(*str) * (len))))
		return (NULL);
	str = ft_strsub(tmp, i, len);
	return (str);
}
