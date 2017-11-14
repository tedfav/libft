/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 07:45:05 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/13 07:56:54 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(char const *s1, char const *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	i = 0;
	while (str1[i] == str2[i] && i < n)
	{
		if (str1[i] == '\0' && str2[i] == '\0')
			return (0);
		i++;
	}
	if (str1[i] == str2[i] && i == n)
		return (0);
	return (str1[i] - str2[i]);
}