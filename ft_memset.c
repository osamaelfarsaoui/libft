/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:40:30 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/26 17:26:02 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	int				i;
	unsigned char	*tmp;

	tmp = b;
	i = 0;
	while (n > 0)
	{
		tmp[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (b);
}
