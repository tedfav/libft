/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 08:39:36 by tfavart           #+#    #+#             */
/*   Updated: 2017/07/13 09:39:29 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_strlen(char *str)
{
	unsigned	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

unsigned	int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned	int	count;
	unsigned	int	len;

	count = 0;
	len = ft_strlen(dest);
	if (size <= 0)
		return (len);
	while (src[count] != '\0' && (len + count) < size - 1)
	{
		dest[len + count] = src[count];
		count++;
	}
	dest[len + count] = '\0';
	if (len < size)
		return (ft_strlen(src) + len);
	else
		return (ft_strlen(src) + size);
}
