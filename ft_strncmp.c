/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 08:09:37 by tfavart           #+#    #+#             */
/*   Updated: 2017/07/11 09:18:40 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int					ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n == 0)
		return (0);
	while (s1[count] == s2[count] && count < n - 1)
	{
		if (s1[count] == '\0' && s2[count] == '\0')
			return (0);
		count++;
	}
	return (s1[count] - s2[count]);
}
