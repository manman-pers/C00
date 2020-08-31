#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_is_negative(int n)
{

	n = -9;

	if( n >= '0')
	{
		ft_putchar('P');
	}

	else
	{
		ft_putchar('N');
	}
}


int main()
{
	ft_is_negative('n');

	return(0);
}
