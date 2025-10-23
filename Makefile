# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 09:40:34 by oelfarsa          #+#    #+#              #
#    Updated: 2025/10/23 19:37:28 by oelfarsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_itoa.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_tolower.c \
		ft_toupper.c \

B_SRCS = ft_lstadd_front.c \
		ft_lstnew.c \
		ft_lstsize.c \

B_OBJS = $(B_SRCS:%.c=%.o)

OBJS = $(SRCS:%.c=%.o)

MAIN = main.c
DEBUG = debug

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(B_OBJS)
	@rm -f $(DEBUG)

fclean: clean
	rm -f $(NAME)

bonus: $(NAME) $(B_OBJS)
	ar rcs $(NAME) $(B_OBJS)

remove:
	@rm -f $(DEBUG)

debug: remove
	$(CC) $(CFLAGS) $(MAIN) -L. -lft -o $(DEBUG)
	@./$(DEBUG)

re: fclean all

.PHONY: clean