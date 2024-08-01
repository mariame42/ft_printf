CC = CC
CFLAGS = -Wall -Werror -Wextra
ar = ar rcs

SRC = my_helper_function.c my_printf.c

O_fILES = $(SRC:.c=.o)

NAME = libftprintf.a

all : $(NAME)

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(O_fILES)
	$(ar) $(NAME) $(O_fILES)

clean :
	rm -f $(O_fILES)

fclean : clean
	rm -f $(NAME)

re :
	fclean all

.PHONY : all, fclean, clean, re