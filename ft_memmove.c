/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:14:33 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/26 18:06:59 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move(char *m_dst, const char *m_src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		m_dst[i] = m_src[i];
		i++;
	}
}

static void	reverse(char *r_dst, const char *r_src, size_t n)
{
	size_t	i;

	i = n;
	while (i > 0)
	{
		r_dst[i - 1] = r_src[i - 1];
		i--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*t_dst;
	char	*t_src;

	if (!dst && !src)
		return (NULL);
	t_dst = (char *)dst;
	t_src = (char *)src;
	if (t_dst < t_src)
		move(t_dst, t_src, n);
	else if (t_dst > t_src)
		reverse(t_dst, t_src, n);
	return (dst);
}
