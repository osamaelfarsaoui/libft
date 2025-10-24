/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:52:09 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/24 22:37:37 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *str, char c)
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

static void	free_memory(char **result, int fill)
{
	int i;

	i = 0;
	while(i < fill)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	start;
	int	end;
	int	words;
	char	**alloc;

	if(!s)
		return (NULL);
	words = count(s, c);
	alloc = malloc(sizeof(char *) * (words + 1));
	if(!alloc)
		return (NULL);
	i = 0;
	j = 0;
	while(s[i])
	{
		while(s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			start = i;
			while(s[i] && s[i] != c)
				i++;
			alloc[j] = make_word(s. start, i);
			if (!alloc[j])
			{
				free_memory(alloc, j);
				return (NULL);
			}
			j++;
		}
	}
	alloc[j] = NULL;
	return (alloc);
}
