/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:09:25 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/10 16:37:09 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*str1;
	char	*str2;

	str2 = (char*)needle;
	while (*str2)
	{
		str1 = (char*)haystack;
		while (*str1)
		{
			while (*str1 == *str2)
			{
				if (*str2 == '\0')
					return ((char*)needle);
				str1++;
				str2++;
			}
			str1++;
		}
		str2++;
	}
	return (NULL);
}
