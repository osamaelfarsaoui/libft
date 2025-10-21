/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fornax <fornax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:02:57 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/21 21:38:40 by fornax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count(int n)
{
	int	count;
	long	nb;

	count = 0;
	nb = (long)n;
	if (nb == 0)
		count++;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while(nb > 0)
	{
		count++;
		nb /= 10;
	}
	return(count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*alloc;
	long	nb;

	nb = (long)n;
	len = count(nb);
	alloc = malloc(sizeof(char) * (len + 1));
	if (!alloc)
		return (NULL);
	alloc[len--] = 0;
	if(nb == 0)
		alloc[0] = '0';
	if(nb < 0)
	{
		nb = -nb;
		alloc[0] = '-';
	}
	while(nb != 0)
	{
		alloc[len--] = (nb % 10) + 48;
		nb /= 10;
	}
	return (alloc);
}
