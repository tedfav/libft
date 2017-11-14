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

static int		ft_len_word(char *str, char c)
{
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[i] == c)
	{
		i++;
	}
	while (str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static int		ft_len_tab(char *str, char c)
{
	int			len;
	int			i;
	int			first;

	i = 0;
	len = 0;
	first = 0;
	while (str[i] != '\0')
	{
		if (str[0] != c)
			first = 1;
		if (str[i] != c)
			if (str[i - 1] == c)
				len++;
		i++;
	}
	return (len + first);
}

static void		*ft_free_tab(char **tab)
{
	int			i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	char		*word;
	int			i;
	int			y;
	int			len;

	i = 0;
	if (!(tab = (char**)malloc(sizeof(*tab) * (ft_len_tab(str, c) + 1))))
		return (NULL);
	len = ft_len_tab(str, c);
	tab[len] = 0;
	while (i < len)
	{
		y = 0;
		if (!(word = (char*)malloc(sizeof(*word) * (ft_len_word(str, c) + 1))))
			return (ft_free_tab(tab));
		while ((*str == c)
			str++;
		while (*str != c)
			word[y++] = *(str++);
		word[y] = '\0';
		tab[i++] = word;
	}
	return (tab);
}