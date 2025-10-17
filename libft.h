/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 09:16:37 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/17 14:06:10 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memset(void *b, int c, size_t l);
void	*ft_memmove(void *dst, const void *src, size_t l);
void	*ft_memcpy(void	*dst, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *str, size_t n);

#endif