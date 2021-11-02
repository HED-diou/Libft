# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 19:00:04 by hed-diou          #+#    #+#              #
#    Updated: 2021/11/02 19:11:05 by hed-diou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

SRCS = $(SRC:.c=.o)

HEADER = libft.h

all:  $(NAME)

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
