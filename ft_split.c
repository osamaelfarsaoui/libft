/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:52:09 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/26 18:11:31 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static void	free_split(char **s, size_t fill)
{
	size_t	i;

	i = 0;
	while (i < fill)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

static int	fill_array(const char *s, char c, char **alloc)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			alloc[j] = ft_substr(s, start, i - start);
			if (!alloc[j])
				return (free_split(alloc, j), 0);
			j++;
		}
		else
			i++;
	}
	alloc[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**alloc;

	if (!s)
		return (NULL);
	alloc = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!alloc)
		return (NULL);
	if (!fill_array(s, c, alloc))
		return (NULL);
	return (alloc);
}
