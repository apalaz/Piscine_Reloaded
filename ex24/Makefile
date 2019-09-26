# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apalaz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 12:49:21 by apalaz            #+#    #+#              #
#    Updated: 2018/10/04 16:13:35 by apalaz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	./srcs/ft_putchar.c	\
		./srcs/ft_putstr.c	\
		./srcs/ft_strcmp.c	\
		./srcs/ft_strlen.c	\
		./srcs/ft_swap.c

OBJS =	ft_putchar.o	\
		ft_putstr.o		\
		ft_strcmp.o		\
		ft_strlen.o		\
		ft_swap.o

HEADER = ./includes/

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRCS) -I $(HEADER)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
