/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:28:29 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/20 13:09:58 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	cal;
	unsigned char	*alloc;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	cal = nmemb * size;
	alloc = malloc(sizeof(char) * cal);
	if(!alloc)
		return (NULL);
	ft_bzero(alloc, cal);
	return (alloc);
}
