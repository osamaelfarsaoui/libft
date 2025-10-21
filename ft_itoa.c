/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fornax <fornax@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:02:57 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/21 19:11:54 by fornax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count(int nb)
{
	int	count;

	count = 0;
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

	len = count(n);
	alloc = malloc(sizeof(char) * (len + 1));
	if (!alloc)
		return (NULL);
	alloc[len--] = 0;
	if(n == 0)
		alloc[0] = '0';
	if(n < 0)
	{
		n = -n;
		alloc[0] = '-';
	}
	while(n != 0)
	{
		alloc[len--] = (n % 10) + 48;
		n /= 10;
	}
	return (alloc);
}
