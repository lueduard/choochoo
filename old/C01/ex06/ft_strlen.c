void	ft_strlen(char *str)
{
	int	b;

	b = 0;
	while (str[b] >= '\0')
	{
		b++;	
	}
	return (b);
}
