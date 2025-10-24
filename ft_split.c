/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:52:09 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/24 01:04:09 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(str[i])
	{
		while (str[i] == c)
			i++;
		if(str[i] != '\0')
			count++;
		while(str[i] && str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*make_word(char	*result, int fst, int lst)
{
	
}

static void	free_memory(char **result, int count)
{
	int i;

	i = 0;
	while(i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	l;
	char	**alloc;

	l = ft_strlen(s);
	*alloc = malloc(sizeof(char) * (l + 1));
	if(!alloc)
		return (NULL);
	i = 0;
	while(s[i])
	{
		
	}
}
