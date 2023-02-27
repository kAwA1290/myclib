# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skawai <skawai@student.42tokyo.jp>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/30 09:48:28 by skawai            #+#    #+#              #
#    Updated: 2023/02/10 21:15:39 by skawai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRC_DIR		=	./

SRCS		=	ft_printf.c \
				ft_putcharacters.c \
				ft_putnumbers.c

OBJS		=	$(SRCS:c=o)

CC			=	cc

ARCMD		=	ar -rcs

CFLAGS		=	-Wall -Wextra -Werror

RM			=	rm -f

.PHONY:		all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS)
				$(ARCMD) $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all
