#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = "00";
	b = "01";
	while (b <= "99")
	{
		while (a <= "98")
		{
			write (1, &a, 2);
			write (1, " ", 1);
			write (1, &b, 2);
			a++;
		}
		b++;
	}
}

int	main(void)
{
	ft_print_comb2 ();
	return (0);
}