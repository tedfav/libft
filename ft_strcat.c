/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:50:39 by tfavart           #+#    #+#             */
/*   Updated: 2017/07/11 18:30:39 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int count2;

	count = 0;
	count2 = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count2] != '\0')
	{
		dest[count] = src[count2];
		count2++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
