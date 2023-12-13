
#include "ft_printf.h"

void	ft_putnbr_add(unsigned long nbr, int *count)
{
	char	*t;

	t = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putnbr_add(nbr / 16, count);
		ft_putnbr_add(nbr % 16, count);
	}
	else
		ft_putchar(t[nbr], count);
}
