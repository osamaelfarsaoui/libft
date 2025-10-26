/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:30:21 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/26 19:30:37 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l_dst;
	size_t	l_src;

	if (dstsize == 0)
		return (ft_strlen(src));
	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (l_dst >= dstsize)
		return (dstsize + l_src);
	i = 0;
	while (i < l_src && i < dstsize - l_dst - 1)
	{
		dst[l_dst + i] = src[i];
		i++;
	}
	dst[l_dst + i] = '\0';
	return (l_dst + l_src);
}
