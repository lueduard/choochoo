void	ft_putB (int x)
{
	int	zero;

	zero = 0;
	while (zero < x - 2)
	{
		if (x <= 1)
		{
			break ;
		}
		ft_putchar ('B');
		zero++;
	}
}

void	ft_putC (int x, int y)
{
	if ((x == 1 && y == 2) || (x == 1 && y > 1))
	{
		ft_putchar ('\n');
		ft_putchar ('C');
	}
	if ((x > 1 && y > 1) != (x == 2 && y == 2))
	{
		if (y <= 2)
		{
			ft_putchar ('C');
			ft_putB (x);
			ft_putchar ('C');
		}
		else
		{
			ft_putchar ('\n');
			ft_putchar ('C');
			ft_putB (x);
			ft_putchar ('C');
		}
	}
}

void	ft_body_size(int x, int y)
{
	int	k;

	k = 3;
	if (y >= 3 and x >= 2)
	{
		while (k < y + 1)
		{
			write (1, "\n", 1);
			ft_body (x, y);
			k++;
		}
	}
	else
	{
		while (k < y + 1)
		{
			write (1, "\n", 1);
			write (1, "B", 1);
			k++;
		}
	}
}

void	ft_putA (int x, int y)
{
	ft_putchar ('A');
	if (x > 2)
	{
		ft_putB (x);
		ft_putchar ('A');
	}
	if (x == 2)
	{
		ft_putchar ('A');
	}
	if (x == 2 and y == 2)
	{
		ft_putchar ('\n');
		ft_putchar ('C');
		ft_putchar ('C');
	}
}

void	rush (int x, int y)
{
	ft_putA (x, y);
	ft_body_size (x, y);
	if (x > 1 and y == 2)
	{
		ft_putchar ('\n');
	}
	ft_putC (x, y);
}
