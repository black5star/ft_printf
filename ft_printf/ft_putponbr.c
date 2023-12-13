
#include "ft_printf.h"

void	ft_putponbr(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_putponbr(n / 10, count);
		ft_putponbr((n % 10), count);
	}
	else
		ft_putchar((n + 48), count);
}
