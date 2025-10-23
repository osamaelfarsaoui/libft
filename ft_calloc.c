/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 12:28:29 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/23 20:13:01 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	unsigned char	*alloc;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	total = nmemb * size;
	if(total / nmemb != size)
		return (NULL);
	alloc = malloc(total);
	if(!alloc)
		return (NULL);
	ft_bzero(alloc, total);
	return (alloc);
}
