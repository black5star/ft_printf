
#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == (-2147483648))
	{
		write (1, "-2147483648", 11);
		*count += 11;
	}
	else if (n < 0 && n != (-2147483648))
	{
		ft_putchar('-', count);
		ft_putnbr(-n, count);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, count);
		ft_putnbr((n % 10), count);
	}
	else
		ft_putchar((n + 48), count);
}
