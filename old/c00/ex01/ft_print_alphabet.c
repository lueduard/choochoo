#include <stdio.h>
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a != 'z' + 1)
	{
		write(1, &a, 1);
		a++;
	}
}
