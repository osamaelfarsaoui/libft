/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:05:28 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/17 13:43:14 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	i;
	char	find;

	find = (char)c;
	i = 0;
	while(s[i])
	{
		if(s[i] == find)
			return ((char *)&s[i]);	
		i++;
	}
	if(s[i] == find)
		return((char *)&s[i]);
	return (NULL);
}
