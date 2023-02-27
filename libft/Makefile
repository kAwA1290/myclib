# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skawai <skawai@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 20:30:50 by skawai            #+#    #+#              #
#    Updated: 2023/01/27 18:47:49 by skawai           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC_DIR		=	./

SRCS		=	ft_calloc.c \
				ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strcmp.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \


BONUS_SRCS	=	ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \

OBJS		=	$(SRCS:c=o)

BONUS_OBJS	=	$(BONUS_SRCS:c=o)

CC			=	gcc

#CFLAGS		=	-Wall -Wextra -Werror
CFLAGS		=	-Werror

RM			=	rm -f

.PHONY:		all clean fclean re bonus

all:		$(NAME)

$(NAME):	$(OBJS)
				ar -rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

bonus:		$(OBJS) $(BONUS_OBJS)
				ar -rcs $(NAME) $(OBJS) $(BONUS_OBJS)
