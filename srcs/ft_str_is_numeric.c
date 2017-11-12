int		ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while ((str[count] >= '0' && str[count] <= '9') || str[count] == '\0')
	{
		if (str[count] == '\0')
			return (1);
		count++;
	}
	return (0);
}
