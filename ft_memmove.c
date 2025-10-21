/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fornax <fornax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:14:33 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/21 18:08:55 by fornax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move(char *m_dst, const char *m_src, size_t l)
{
	size_t	i;

	i = 0;
	while(i < l)
	{
		m_dst[i] = m_src[i];
		i++;
	}
}

static void	reverse(char *r_dst, const char *r_src, size_t l)
{
	size_t	i;

	i = l;
	while(i > 0)
	{
		r_dst[i - 1] = r_src[i - 1];
		i--;
	}
}

void	*ft_memmove(void *dst, const void *src, size_t l)
{
	char 	*t_dst;
	char	*t_src;
	
	if(!dst && !src)
		return (NULL);
	t_dst = (char *)dst;
	t_src = (char *)src;
	if (t_dst < t_src)
		move(t_dst, t_src, l);
	else if (t_dst > t_src)
		reverse(t_dst, t_src, l);
	return (dst);
}
