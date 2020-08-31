#include <unistd.h>

void ft_putint(int a)
{
	write(1, &a, 1);
}

void ft_print_numbers(void)
{
	int a;
	a = '0';

	while( a <= '9')
	{
		ft_putint(a);
		a++;
	}
}
