/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fornax <fornax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:55:21 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/21 17:57:51 by fornax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t l)
{
	size_t	i;
	size_t	j;


	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < l)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && haystack[i + j] && i + j < l)
			j++;
		if(needle[j] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
