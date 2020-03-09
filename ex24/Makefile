# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: armajchr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/01 17:55:18 by armajchr          #+#    #+#              #
#    Updated: 2019/04/02 19:31:29 by armajchr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c 

SRC1 = ft_putchar.o \
	   ft_putstr.o \
	   ft_strcmp.o \
	   ft_strlen.o \
	   ft_swap.o

INCLUDES = ./includes/

all: $(NAME)

create0:
	gcc -c $(SRC)

$(NAME): create0
	ar -rc $(NAME) $(SRC1)

clean:
	rm -rf $(SRC1)

fclean: clean
	rm -rf $(NAME)

re: fclean all
