
#include "ft_printf.h"

void	my_check(char s, va_list arg, int *count)
{
	if (s == 'c')
		ft_putchar(va_arg(arg, int), count);
	else if (s == 's')
		ft_putstr(va_arg(arg, char *), count);
	else if (s == 'p')
	{
		ft_putstr("0x", count);
		ft_putnbr_add(va_arg(arg, unsigned long), count);
	}
	else if (s == 'd' || s == 'i')
		ft_putnbr(va_arg(arg, int), count);
	else if (s == 'u')
		ft_putponbr(va_arg(arg, unsigned int), count);
	else if (s == 'x' || s == 'X')
		ft_putnbr_base(va_arg(arg, unsigned int), s, count);
	else if (s == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		count;

	count = 0;
	va_start(arg, s);
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] != '%')
		{
			ft_putchar(s[i], &count);
			i++;
		}
		if (!s[i] || !s[i + 1])
			break ;
		i++;
		if (s[i])
			my_check(s[i], arg, &count);
		i++;
	}
	return (count);
}
