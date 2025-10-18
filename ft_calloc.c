/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:28:29 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/18 13:45:47 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	cal;
	unsigned char	*alloc;

	if(nmemb == 0 || size == 0)
		return (malloc(0));
	if(nmemb && size && nmemb * size / nmemb != size)
		return (NULL);
	cal = nmemb * size;
	alloc = malloc(sizeof(char) * cal);
	if(!alloc)
		return (NULL);
	i = 0;
	while(i < cal)
	{
		alloc[i] = 0;
		i++;
	}
	return(alloc);
}
