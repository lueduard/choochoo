int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	low;

	i = 0;
	while (str[i] != '\0')
	{
		low = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			low = 1;
		if (low == 0)
			return (0);
		i++;
	}
	return (1);
}
