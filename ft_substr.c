/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:20:51 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/19 15:22:08 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub;
	size_t	j;

	s_len = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if(!sub)
		return (NULL);
	i = 0;
	while (s[i] != (char)start)
		i++;
	j = i;
	while (s[i] && i < j + len)
	{
		sub[s_len++] = s[i++];
	}
	sub[s_len] = '\0';
	return(sub);
}
