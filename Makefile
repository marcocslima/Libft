# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 21:00:15 by mcesar-d          #+#    #+#              #
#    Updated: 2022/04/08 07:34:07 by mcesar-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_atoi.c \
					ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strdup.c \
					ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
					ft_memset.c ft_memcmp.c ft_memcpy.c ft_memchr.c ft_memmove.c
OBJS			=	$(SRCS:.c=.o)
CC				=	cc
FLAGS			=	-Wall -Wextra -Werror
TESTS			=	tests_libft.c
NAME			=	libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)
clean:
			rm -rf $(OBJS) ./tests ./*.out ./resultado

fclean:		clean
			rm -rf $(NAME)

re:			fclean $(NAME)

run:		apps
			./tests > resultado

apps:	
			$(CC) $(FLAGS) $(SRCS) $(TESTS) -lbsd -o tests