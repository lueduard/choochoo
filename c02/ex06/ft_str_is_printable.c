int	ft_str_is_printable(char *str)
{
	int	i;
	int printable;

	i = 0;
	while (str[i] != '\0')
	{
		printable = 0
		if (str >= 32 && str <= 126)
			printable = 1
		if (printable == 0)
			return (0);
		i++;
	}
	return (1);
}
