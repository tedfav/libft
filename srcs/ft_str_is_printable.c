int		ft_str_is_printable(char *str)
{
	int		count;

	count = 0;
	if (str[count] == '\0')
		return (1);
	while ((str[count] > 31 && str[count] <= 127) || str[count] == '\0')
	{
		if (str[count] == '\0')
			return (1);
		count++;
	}
	return (0);
}
