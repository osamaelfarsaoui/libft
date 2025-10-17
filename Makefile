# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 09:40:34 by oelfarsa          #+#    #+#              #
#    Updated: 2025/10/17 14:06:32 by oelfarsa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_isdigit.c \
		ft_strncmp.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strdup.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_tolower.c \
		ft_toupper.c \

OBJS = $(SRCS:%.c=%.o)

MAIN = main.c
DEBUG = debug

all: $(NAME)
	@echo "Library is ready."

$(NAME): $(OBJS)
	@echo "Linking files.."
	@ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning files.."
	@rm -f $(OBJS)
	@rm -f $(DEBUG)

fclean: clean
	@echo "Removing library..."
	@rm -f $(NAME)

debug:
	$(CC) $(CFLAGS) $(MAIN) -L. -lft -o $(DEBUG)
	@./$(DEBUG)

re: fclean all