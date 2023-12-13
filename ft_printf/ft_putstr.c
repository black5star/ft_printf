
#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		*count += 6;
		return ;
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
		*count += 1;
	}	
}
