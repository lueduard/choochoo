int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	while (str[i] != '\0')
	{
		alpha = 0;
		if (str[i] >= 'a' && str[i] <= 'z')
			alpha = 1;
		if (str[i] >= 'A' && str[i] <= 'Z')
			alpha = 1;
		if (alpha == 0)
			return (0);
		i++;
	}
	return (1);
}
