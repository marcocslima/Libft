# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcesar-d <mcesar-d@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 21:00:15 by mcesar-d          #+#    #+#              #
#    Updated: 2022/04/19 07:10:40 by mcesar-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_atoi.c \
					ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strdup.c \
					ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
					ft_memset.c ft_memcmp.c ft_memcpy.c ft_memchr.c ft_memmove.c \
					ft_strnstr.c ft_bzero.c ft_calloc.c ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c
OBJS			=	$(SRCS:.c=.o)
BONUS			=	ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c ft_lstsize.c \
					ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c
BONUS_O			=	$(BONUS:.c=.o)
CC				=	cc
FLAGS			=	-Wall -Wextra -Werror
TESTS			=	tests_libft.c
NAME			=	libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS)

bonus:		$(NAME)	$(BONUS_O)
			ar -rcs	$(NAME) $(BONUS_O)
			ranlib	$(NAME)

clean:
			rm -rf $(OBJS) $(BONUS_O) ./tests ./*.out ./resultado

fclean:		clean
			rm -rf $(NAME)

re:			fclean $(NAME)

run:		apps
			./tests > resultado

apps:	
			$(CC) $(FLAGS) $(SRCS) $(TESTS) -lbsd -o tests
			
deb:	
			$(CC) -g $(FLAGS) $(SRCS)