
#include "ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char c, int *count)
{
	char	*t;

	if (c == 'X')
		t = "0123456789ABCDEF";
	else
		t = "0123456789abcdef";
	if (nbr >= 16)
	{
		ft_putnbr_base(nbr / 16, c, count);
		ft_putnbr_base(nbr % 16, c, count);
	}
	else
		ft_putchar(t[nbr], count);
}
