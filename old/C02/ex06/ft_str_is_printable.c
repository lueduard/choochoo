int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str >= 32 && str <= 126) && (str[i] == '\0'))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
	}
}
