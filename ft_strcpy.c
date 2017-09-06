/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 13:43:26 by tfavart           #+#    #+#             */
/*   Updated: 2017/07/12 18:34:51 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	while (dest[count])
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
