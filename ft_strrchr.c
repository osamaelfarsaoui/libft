/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:58 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/30 13:36:06 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	find;
	char	*result;

	if (!s)
		return (NULL);
	find = (char)c;
	result = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == find)
			result = ((char *)&s[i]);
		i++;
	}
	if (s[i] == find)
		result = ((char *)&s[i]);
	return (result);
}
