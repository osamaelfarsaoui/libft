/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:52:09 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/24 23:07:37 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while(str[i])
	{
		while (str[i] == c)
			i++;
		if(str[i] != '\0')
			count++;
		while(str[i] && str[i] != c)
			i++;
	}
	return (count);
}

static char	*make_word(const char *s, int fst, int lst)
{
	int i;
	int len;
	char *word;

	len = lst - fst;
	if (len <= 0)
		return (NULL);
	word = malloc(sizeof(char) * (len + 1));
	if(!word)
		return (NULL);
	i = 0;
	while(i < len)
	{
		word[i] = s[fst + i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_memory(char **result, size_t fill)
{
	size_t i;

	i = 0;
	while(i < fill)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**alloc;

	if(!s)
		return (NULL);
	alloc = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if(!alloc)
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		while(s[i] == c)
			i++;
		if (s[i] != '\0')
			start = i;
		while(s[i] && s[i] != c)
			i++;
		alloc[j] = make_word(s, start, i);
		if (!alloc[j])
			free_memory(alloc, j);
		j++;
	}
	alloc[j] = NULL;
	return (alloc);
}
