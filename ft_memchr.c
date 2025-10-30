/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:23:24 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/30 13:39:30 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*t_s;
	unsigned char	t_c;

	if (!s)
		return (NULL);
	t_s = (unsigned char *)s;
	t_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (t_s[i] == t_c)
			return ((void *)&t_s[i]);
		i++;
	}
	return (NULL);
}
