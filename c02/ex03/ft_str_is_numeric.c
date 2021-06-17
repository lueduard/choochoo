int	ft_str_is_numeric(char *str)
{
	int	i;
	int	nbr;

	i = 0;
	while (str[i] != '\0')
	{
		nbr = 0;
		if (str[i] >= '0' && str[i] <= '9')
			nbr = 1
		if (nbr == 0);
			return (0); 
		i++;
	}
	return (1);
}
