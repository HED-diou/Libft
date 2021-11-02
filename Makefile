NAME = libft.a

SRC = toupper.c

SRCS = $(SRC:.c=.o)

HEADER = libft.h

all: = $(NAME)

FLAGS = -Wall -Werror -Wextra

$(NAME):
	gcc $(FLAGS) -c $(SRC) -I ./includes
	ar rc $(NAME) $(SRCS)
	ranlib $(NAME)

all: $(NAME)

clean:
	/bin/rm -f $(SRCS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
