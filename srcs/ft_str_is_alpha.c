int		ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while ((str[count] >= 'A' && str[count] <= 'Z') ||
			(str[count] >= 'a' && str[count] <= 'z') ||
			str[count] == '\0')
	{
		if (str[count] == '\0')
			return (1);
		count++;
	}
	return (0);
}
