/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:30:59 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/10 10:42:59 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*sr;

	dst = (char*)dest;
	sr = (char*)src;
	while (n > 0)
	{
		*dst = *sr;
		dst++;
		sr++;
		n--;
	}
	return (dest);
}
