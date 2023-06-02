# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pbotargu <pbotargu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:02:36 by pbotargu          #+#    #+#              #
#    Updated: 2023/06/02 11:00:15 by pbotargu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
REMOV = rm -rf

NAME = libft.a

SOURCE = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strlen.c ft_atoi.c \
		ft_strlcpy.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_memset.c \
		ft_memcpy.c ft_bzero.c ft_memmove.c ft_memchr.c ft_memcmp.c    

OBJECTS = $(SOURCE:%.c=%.o)

all: ${NAME}


$(NAME): $(OBJECTS)
	@ar rc $(NAME) $(OBJECTS)

clean:
	$(REMOV) $(OBJECTS)

fclean: clean
	$(REMOV) $(NAME)

re: fclean all
