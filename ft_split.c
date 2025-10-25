/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelfarsa <oelfarsa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:52:09 by oelfarsa          #+#    #+#             */
/*   Updated: 2025/10/25 17:28:04 by oelfarsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//static char	*make_word(const char *s, int fst, int lst)
//{
//	int i;
//	int len;
//	char *word;

//	len = lst - fst;
//	if (len <= 0)
//		return (NULL);
//	word = malloc(sizeof(char) * (len + 1));
//	if(!word)
//		return (NULL);
//	i = 0;
//	while(i < len)
//	{
//		word[i] = s[fst + i];
//		i++;
//	}
//	word[len] = '\0';
//	return (word);
//}

//static char alloc_word(char **alloc,char *s,char c)
//{
//	int i;
//	int j;
//	int word;

//	i = 0;
//	word = 0;
//	while (s[i])
//	{
//		j = 0;
//		while (s[i] == c)
//			i++;
//		while(s[i] != c)
//			j++;
//		if(j > 0)
//		{
//			alloc[word] = malloc(sizeof(char) * (j + 1));
//			if (!alloc[word])
//			{
//				free_memory(s, word);
//				return (NULL);
//			}
//			word++;	
//		}
//	}
//}

//static char	**fill_array(char **alloc, char *s, char c)
//{
//	int i;
//	int j;
//	int word;

//	i = 0;
//	word = 0;
//	while (s[i])
//	{
//		j = 0;
//		while(s[i] == c)
//			i++;
//		while(s[i] != c)
//		{
//			alloc[word][j]= s[i];
//			i++;
//			j++;
//		}
//		if(j > 0)
//			word++;
//	}
//	alloc[word] = NULL;
//}

//static long next(char **alloc, const char *s, char c, size_t i, size_t *j)
//{
//	size_t	start;
//	char	*word;

//	while(s[i] == c)
//		i++;
//	if (s[i] != '\0')
//		return ((long)i);
//	start = i;
//	while(s[i] && s[i] != c)
//		i++;
//	word = ft_substr(s, start, i);
//	if (!word)
//		return (-1);
//	alloc[*j] = word;
//	(*j)++;
//	return ((long)i);
//}

//static int	count_words(const char *s, char c)
//{
//	int	i;
//	int	count;

//	i = 0;
//	count = 0;
//	while(s[i])
//	{
//		while (s[i] == c)
//			i++;
//		if(s[i] != '\0')
//			count++;
//		while(s[i] && s[i] != c)
//			i++;
//	}
//	return (count);
//}

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
