#variaveis
NAME = libftprintf.a
HEADER = ft_printf.h
SRC = \
	ft_printf.c \
	helper_ft_print_args.c \
	helper_ft_putchar.c \
	helper_ft_puthex.c \
	helper_ft_putnbr.c \
	helper_ft_putptr.c \
	helper_ft_putstr.c \
	helper_ft_putuint.c
OBJ = $(SRC:.c=.o)
FLAGS = -Wextra -Werror -Wall

#regras

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC) $(HEADER)
	cc $(FLAGS) -c $(SRC)

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	 
re: fclean all

.PHONY: all clean fclean re