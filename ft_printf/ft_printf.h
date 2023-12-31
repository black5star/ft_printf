
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putponbr(unsigned int n, int *count);
void	ft_putnbr_add(unsigned long nbr, int *count);
void	ft_putnbr_base(unsigned int nbr, char c, int *count);
int		ft_printf(const char *s, ...);
#endif
