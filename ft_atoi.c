/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfavart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:59:06 by tfavart           #+#    #+#             */
/*   Updated: 2017/07/10 13:37:39 by tfavart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int result;
	int count;
	int neg;

	result = 0;
	count = 0;
	neg = 0;
	while (str[count] == '\n' || str[count] == '\t' || str[count] == '\v' ||
			str[count] == ' ' || str[count] == '\f' || str[count] == '\r')
		count++;
	if (str[count] == '-')
		neg = 1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = result * 10;
		result = result + str[count] - '0';
		count++;
	}
	if (neg == 1)
		return (-result);
	else
		return (result);
}
