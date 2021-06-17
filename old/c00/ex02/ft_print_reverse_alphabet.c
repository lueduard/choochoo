#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a != 'a' - 1)
	{
		write(1, &a, 1);
		a--;
	}
}
