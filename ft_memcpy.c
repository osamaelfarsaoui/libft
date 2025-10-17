/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:16:46 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/16 19:30:21 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	int i;
	unsigned char	*t_dst;
	unsigned char	*t_src;

	if(dst == NULL && src == NULL)
		return (dst);
	t_dst = (unsigned char *)dst;
	t_src = (unsigned char *)src;
	i = 0;
	while(n > 0)
	{
		t_dst[i] = t_src[i];
		i++;
		n--; 
	}
	return (dst);
}
