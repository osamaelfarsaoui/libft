/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:40:30 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/15 21:42:39 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t l)
{
	int	i;
	unsigned char *tmp;

	i = 0;
	tmp = b;
	while (l > 0)
	{
		tmp[i] = (unsigned char)c;
		i++;
		l--;
	}
	return (b);
}
