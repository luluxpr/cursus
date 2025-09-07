#include <unistd.h>

size_t	print_digit(int n)
{
	int	temp;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
	}
	temp = (n % 10) + '0';
	write(1, &temp, 1);
}