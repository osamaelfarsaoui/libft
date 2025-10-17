/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:58 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/17 13:43:35 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char	find;
	char	*result;

	find = (char)c;
	result = NULL;
	i = 0;
	while (s[i])
	{
		if(s[i] == find)
			result = ((char *)&s[i]);
		i++;
	}
	if (s[i] == find)
		result = ((char *)&s[i]);
	return (result);
}
