/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 06:55:28 by tfavart           #+#    #+#             */
/*   Updated: 2017/07/12 09:03:04 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int count;
	int count2;

	count = 0;
	count2 = 0;
	if (nb <= 0)
		return (dest);
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count2] != '\0' && count2 < nb)
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';
	return (dest);
}
