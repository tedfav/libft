/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 08:44:25 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/14 12:16:07 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char		*ft_check(char *s, char c)
{
	if (s == NULL)
		return (NULL);
	while (*s == c && *s != '\0')
		s++;
	return (s);
}

static int		ft_count_words(char *s, char c)
{
	int			nb;

	nb = 1;
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		if (*s == c && *(s + 1) != c)
			nb++;
		s++;
	}
	return (nb);
}

static	int		ft_count_letters(char **s, char c)
{
	int			nb;

	nb = 0;
	while (**s == c)
		(*s)++;
	while (*s[nb] != c)
		nb++;
	return (nb);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	char		*str;
	int			i;
	int			y;
	
	if (!(s = ft_check((char*)s, c)))
		return (NULL);
	i = ft_count_words((char*)s, c);
	if(!(tab = (char**)malloc(sizeof(char*) * (i + 1))))
		return (NULL);
	tab[i] = 0;
	while (tab[i] != '\0')
	{
		y = 0;
		if (!(str = (char*)malloc(sizeof(char) * (ft_count_letters((char**)&s, c)
							+ 1))))
			return (NULL);
		while (*s != '\0')
		{
			str[y++] = *(s++);
		}
		str[y] = '\0';
		tab[i] = str;
		i++;
	}
	return (tab);
}
