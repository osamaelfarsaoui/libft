/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:40:50 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/24 21:11:14 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if(dstsize == 0)
		return(len);
	while (src[i] && i < dstsize - 1)
	{
			dst[i] = src[i];
			i++;
	}
	dst[i] = '\0';
	return(len);
}
