/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:57:05 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 18:06:37 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c);
static char	*fill_str(const char *s, char c, int *start);
static void	*freeing(char **splitted, int i);

/* Splits a string into an array of strings using a delimiter.
(char const *s) > The string to split.
(char c) > The delimiter character.
return (char **) > Pointer to the array of strings. */
char	**ft_split(char const *s, char c)
{
	char	**splitted;
	int		words;
	int		i;
	int		start;

	i = 0;
	start = 0;
	if (!s)
		return (NULL);
	words = word_count(s, c);
	splitted = ft_calloc(words + 1, sizeof(char *));
	if (!splitted)
		return (NULL);
	while (i < words)
	{
		splitted[i] = fill_str(s, c, &start);
		if (!splitted[i])
		{
			freeing(splitted, i);
			return (NULL);
		}
		i++;
	}
	splitted[words] = NULL;
	return (splitted);
}

/* Counts the number of words in a string separated by a delimiter.
(const char *s) > The string to count words in.
(char c) > The delimiter character.
return (int) > The number of words in the string. */
static int	word_count(const char *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

/* Fills a string with characters from the original string up to the delimiter.
(const char *s) > The original string.
(char c) > The delimiter character.
(int *start) > Pointer to the starting index.
return (char *) > Pointer to the filled string. */
static char	*fill_str(const char *s, char c, int *start)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	while (s[*start] == c)
		(*start)++;
	while (s[*start + len] && s[*start + len] != c)
		len++;
	str = ft_calloc((len + 1), sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[*start + i];
		i++;
	}
	str[i] = '\0';
	*start = *start + len;
	return (str);
}

/* Frees the memory allocated for the array of strings.
(char **splitted) > Pointer to the array of strings.
(int i) > The index up to which the memory should be freed.
return (void *) > None. */
static void	*freeing(char **splitted, int i)
{
	while (i-- > 0)
		free(splitted[i]);
	free(splitted);
	return (NULL);
}
