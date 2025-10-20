/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:45:17 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/20 14:31:02 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*alloc;

	if(!s || !f)
		return(NULL);
	i = 0;
	len = ft_strlen(s);
	alloc = malloc(sizeof(char) * (len + 1));
	if (!alloc)
		return (NULL);
	while(s[i])
	{
		alloc[i] = f(i, s[i]);
		i++;
	}
	alloc[len] = '\0';
	return (alloc);
}
