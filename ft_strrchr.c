/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:32:58 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/17 10:48:40 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	char	find;

	find = (char)c;
	i = ft_strlen(s);
	while(s[i])
	{
		if(s[i] == find)
			return ((char *)&s[i]);
		i--;
	}
	if(s[i] == find)
		return ((char *)&s[i]);
	return(0);
}
