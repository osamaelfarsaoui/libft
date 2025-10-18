/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:55:21 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/18 01:09:20 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lil, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!lil)
		return ((char *)big);
	while (big[i] && i < l)
	{
		while (big[i + j] == lil[j] && big[i + j] && i + j < l)
		{
			j++;
			if (!lil[j])
				return ((char *)big + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
