# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmazibu <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/08 11:28:56 by lmazibu           #+#    #+#              #
#    Updated: 2018/06/08 15:35:16 by lmazibu          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Werror -Wextra -I -c
CFILES = ft_strlen.c\
		ft_strdup.c\
		ft_strncpy.c\
		ft_strcat.c\
		ft_strncat.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strnstr.c\
		ft_strcmp.c\
		ft_strndup.c\
		ft_strncat.c\
		ft_strstr.c\
		ft_strncmp.c\
		ft_isalnum.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_bzero.c\
		ft_atoi.c\
		ft_tolower.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memmove.c\
		ft_memset.c

OBJ = 	ft_strlen.o\
		ft_strdup.o\
		ft_strncpy.o\
		ft_strcat.o\
		ft_strncat.o\
		ft_strlcat.o\
		ft_strchr.o\
		ft_strnstr.o\
		ft_strcmp.o\
		ft_strndup.o\
		ft_strncat.o\
		ft_strstr.o\
		ft_strncmp.o\
		ft_isalnum.o\
		ft_isdigit.o\
		ft_isprint.o\
		ft_isascii.o\
		ft_bzero.o\
		ft_atoi.o\
		ft_tolower.o\
		ft_memccpy.o\
		ft_memchr.o\
		ft_memmove.o\
		ft_memset.o
all:$(NAME)
$(NAME):
	$(CC) $(CFLAGS) $(CFILES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	rm -rf $(OBJ)
fclean :clean 
	rm  -rf $(NAME)
re : fclean all 
