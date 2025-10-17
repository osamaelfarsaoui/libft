/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:08:02 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/16 19:43:59 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	l;
	char	*copy;

	if(s1 == NULL)
		return (NULL);
	l = ft_strlen(s1);
	copy = malloc(sizeof(char) * (l + 1));
	if(!copy)
		return (NULL);
	i = 0;
	while(i < l)
	{
		copy[i] = s1[i];
		i++;
	}
	copy[l] = '\0';
	return (copy);
}
