/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fornax <fornax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:20:51 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/21 16:16:08 by fornax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub;

	s_len = ft_strlen(s);
	if(start >= s_len)
		return ft_strdup("");
	else if (len > s_len - start)
		sub = (char *)malloc(s_len - start + 1);
	else
		sub = (char *)malloc(len + 1);
	if(!sub)
		return (NULL);
	i = 0;
	while (s[i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return(sub);
}
