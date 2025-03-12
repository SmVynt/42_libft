# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psmolin <psmolin@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/11 16:14:14 by psmolin           #+#    #+#              #
#    Updated: 2025/03/12 11:45:42 by psmolin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# To use the library use this command: 
# cc main.c -L. -lft -I.
#
NAME = libft.a
#
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
		ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
#
HEADERS = libft.h
#
#BONUS = ft_isalpha.c
#BONUS_OBJS = $(BONUS:.c=.o)
#
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
#
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
#
all: $(NAME)
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
#
clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
#
fclean: clean
	$(RM) $(NAME)
#
re: fclean all
#
#bonus: $(OBJS) $(BONUS_OBJS)
#	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
#
.PHONY: all clean fclean re bonus