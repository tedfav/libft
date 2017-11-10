/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:43:34 by tfavart           #+#    #+#             */
/*   Updated: 2017/11/10 14:24:01 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*sr;
	size_t			i;

	i = 0;
	dest = (unsigned char*)(dst);
	sr = (unsigned char*)(src);
	if (dest == sr)
		return (dest);
	if (src < dst)
	{
		dest = (unsigned char*)(&dst[n - 1]);
		sr = (unsigned char*)(&src[n - 1]);
		while (n > 0)
		{
			*dest = *sr;
			n--;
			dest--;
			sr--;
		}
	}
	else
		dest = ft_memcpy(dst, src, n);
	return ((void*)dst);
}
