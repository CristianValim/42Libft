/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:57:05 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/04 13:53:37 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c);
static char	*fill_str(const char *s, char c, int *start);
static void	*freeing(char **splitted, int i);

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
	splitted = malloc(words * sizeof(char *));
	if (!splitted)
		return (NULL);
	while (i < words)
	{
		splitted[i] = fill_str(s, c, &start);
		if (!splitted[i])
			freeing(splitted, i);
		i++;
	}
	splitted[words] = NULL;
	return (splitted);
}

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

static char	*fill_str(const char *s, char c, int *start)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	while (s[*start] && s[*start] == c)
		(*start)++;
	while (s[*start] && s[*start + len] != c)
		len++;
	word = malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[*start + i];
		i++;
	}
	word[len] = '\0';
	*start = *start + len;
	return (word);
}

static void	*freeing(char **splitted, int i)
{
	while (i-- > 0)
		free(splitted[i]);
	free(splitted);
	return (NULL);
}
/* int	main(void)
{
	char **result = ft_split("Hello     world     from     42", ' ');
	int i = 0;

	while (result[i])
	{
		printf("String %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
} */