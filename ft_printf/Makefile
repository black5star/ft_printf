CFLAGS = -Wall -Wextra -Werror
CC = cc
SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putponbr.c ft_putnbr_add.c ft_putnbr_base.c ft_printf.c
NAME = libftprintf.a
AR = ar rcs
OBJC = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJC)
	$(AR) $(NAME) $(OBJC)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJC)
fclean: clean
	rm  -f $(NAME)
re:	clean all
