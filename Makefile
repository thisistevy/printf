# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iung <iung@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/23 16:36:00 by iung              #+#    #+#              #
#    Updated: 2022/12/12 10:29:58 by iung             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc 
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf
SRC = ft_printf.c \
	ft_printchar.c \
	ft_printnbr.c \
	ft_printstr.c \
	ft_printhexamin.c \
	ft_printhexamax.c \
	ft_printptr.c \
	ft_printunsigned_nbr.c
	
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : clean fclean all re