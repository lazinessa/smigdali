# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smigdali <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/16 10:34:36 by smigdali          #+#    #+#              #
#    Updated: 2020/03/16 10:34:39 by smigdali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = srcs/ft_putchar.c srcs/ft_putnbr.c srcs/ft_atoi.c srcs/ft_strcmp.c

CMPL = srcs/main.c srcs/do_op.c srcs/check_it.c srcs/sum.c srcs/dim.c srcs/mult.c srcs/div.c srcs/mod.c

INCL = ./includes/

.PHONY: all test clean clean

all:
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(INCL)
	@ar rc libft.a *.o
	@ranlib libft.a
	@gcc $(CMPL) -L. -lft -I $(INCL) -o $(NAME)

test: all
	./$(NAME) 42amis - -20toto12
	./$(NAME) 1 + toto3
	./$(NAME) 1 p 1
	./$(NAME) foo plus fighters
	./$(NAME) 25 / 0
	./$(NAME) 25 % 0
	./$(NAME) toto3 + 4
	./$(NAME) whale plus frog and bee

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f libft.a $(NAME)
