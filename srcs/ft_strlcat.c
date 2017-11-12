size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(dst);
	if (size <= 0)
		return (len);
	while (src[count] != '\0' && (len + count) < size - 1)
	{
		dst[len + count] = src[count];
		count++;
	}
	dst[len + count] = '\0';
	if (len < size)
		return (ft_strlen(src) + len);
	else
		return (ft_strlen(src) + size);
}
