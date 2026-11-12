/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mibarros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 10:51:39 by mibarros          #+#    #+#             */
/*   Updated: 2026/11/12 15:17:21 by mibarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	size_t	count;
	size_t	in_word;
	size_t	i;

	i = 0;
	count = 0;
	in_word = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		if (str[i] != c && in_word == 0)
		{
			count++;
			in_word = 1;
		}
		if (str[i] == c && in_word == 1)
			in_word = 0;
		i++;
	}
	return (count);
}

static void	*free_array(char **arr, size_t x)
{
	size_t	i;

	i = 0;
	while (i < x)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**run_array(char const *s, char c, char **arr)
{
	size_t	i;
	size_t	x;
	size_t	start;

	i = 0;
	x = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			arr[x] = ft_substr(s, start, i - start);
			if (arr[x] == NULL)
				return (free_array(arr, x));
			x++;
		}
	}
	arr[x] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c) + 1;
	arr = malloc(words * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	return (run_array(s, c, arr));
}
