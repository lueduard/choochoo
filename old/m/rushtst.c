#include <unistd.h>

void	rush(int a[4])
{
	a = 1234

	count1 = 0;
	count2 = 2;
	while (count1 < 100 && count2 < 100)
	{
		write (1, ", ", 2);
		comb = count1 / 10 + '0';
		write (1, &comb, 1);
		comb = count1 % 10 + '0';
		write (1, &comb, 1);
		write (1, " ", 1);
		comb = count2 / 10 + '0';
		write (1, &comb, 1);
		comb = count2 % 10 + '0';
		write (1, &comb, 1);
		++count2;
		if (count2 == 100)
			count2 = ++count1 + 1;
	}
}
