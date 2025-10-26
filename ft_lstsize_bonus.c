/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:20:07 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/24 14:38:51 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list *t;

	i = 0;
	t = lst;
	if(!lst)
		return (0);
	while(t)
	{
		t = t->next;
		i++;
	}
	return (i);
}
