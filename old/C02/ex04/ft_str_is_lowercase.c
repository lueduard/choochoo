int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[0] == '\0'))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
