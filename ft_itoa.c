/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:02:57 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/20 13:40:09 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	count;
	int	sign;
	char	*alloc;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	alloc = malloc(sizeof(char) * (count + 1));
	if (!alloc)
		return (NULL);
	while (count > 0)
	{
		alloc[count] = n % 10 + 48;
		count--;
	}
	alloc[ft_strlen(n)] = '\0';
	return (alloc);
}
