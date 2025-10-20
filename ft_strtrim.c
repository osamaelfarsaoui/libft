/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:34:30 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/20 12:27:09 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*alloc;

	if(!s1 || !set)
		return (NULL);
	start = 0;
	while(s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while(end > start && ft_strchr(set, s1 [end - 1]))
		end--;
	len = end - start;
	alloc = malloc(sizeof(char) * (len + 1));
	if(!alloc)
		return (NULL);
	ft_strlcpy(alloc, s1 + start, len + 1);
	return (alloc);
}
