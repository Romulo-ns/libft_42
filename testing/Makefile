# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romdo-na <romdo-na@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 16:23:00 by romdo-na          #+#    #+#              #
#    Updated: 2026/04/24 18:58:11 by romdo-na         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= libft.a

CC			= clang
CFLAGS		= -Wall -Wextra -Werror -g

FLAGLIB		= -rcs

RM			= rm -rf

FUNC		= $(SRC)

SRC 		= $(wildcard srcs/*.c)

OBJ			= $(FUNC:.c=.o)

# BONUS		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
# 				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
# 				ft_lstmap.c


BONUS_OBJ	= $(BONUS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ) libft.h
			@echo "Linking $(NAME)"
			@ar $(FLAGLIB) $(NAME) $(OBJ)
			@ranlib $(NAME)

bonus:		$(BONUS_OBJ) $(NAME)
			@echo "Linking bonus"
			@ar $(FLAGLIB) $(NAME) $(BONUS_OBJ)
			@ranlib $(NAME)

.c.o:
			@echo "Compiling $(<)"
			@$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
			@echo "Cleaning"
			@$(RM) $(OBJ) $(BONUS_OBJ)

fclean:		clean
			@echo "Cleaning headers"
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re