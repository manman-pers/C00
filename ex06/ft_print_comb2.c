#include <unistd.h>

int	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = -1;
	while (a++ < 98)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar('0' + (a / 10));
			ft_putchar('0' + (a % 10));
			ft_putchar(' ');
			ft_putchar('0' + (b / 10));
			ft_putchar('0' + (b % 10));
			if (a != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}

int main()
{
	ft_print_comb2();
	return(0);
}

