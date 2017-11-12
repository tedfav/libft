int		ft_atoi(const char *nptr)
{
	int result;
	int count;
	int neg;

	result = 0;
	count = 0;
	neg = 0;
	while (nptr[count] == '\n' || nptr[count] == '\t' || nptr[count] == '\v' ||
			nptr[count] == ' ' || nptr[count] == '\f' || nptr[count] == '\r')
		count++;
	if (nptr[count] == '-')
		neg = 1;
	if (nptr[count] == '-' || nptr[count] == '+')
		count++;
	while (nptr[count] >= '0' && nptr[count] <= '9')
	{
		result = result * 10;
		result = result + nptr[count] - '0';
		count++;
	}
	if (neg == 1)
		return (-result);
	else
		return (result);
}
