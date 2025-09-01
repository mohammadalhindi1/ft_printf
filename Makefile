NAME    = libftprintf.a

CC      = cc
CFLAGS  = -Wall -Wextra -Werror

SRCS    = ft_printf.c \
          ft_conv_char_str.c \
          ft_conv_numbers.c

OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

