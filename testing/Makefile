# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 20:06:27 by romdo-na          #+#    #+#              #
#    Updated: 2026/04/21 20:07:17 by romdo-na         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = test
CC = gcc
CFLAGS = -Wall -Werror -Wextra -g3
LIBFT_PATH = "../"

$(NAME): make_libft
	$(CC) $(CFLAGS) -o $(NAME) $(LIBFT_PATH)*.o main.c

make_libft:
		make bonus -C $(LIBFT_PATH)

all: 	$(NAME)

clean:	rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: clean all

.PHONY: all clean fclean re