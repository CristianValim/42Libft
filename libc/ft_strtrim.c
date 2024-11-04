/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:20:37 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/04 17:09:30 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimming(const char *set, char c);
static char	*new_string(const char *s1, size_t start, size_t length);

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (trimming(set, s1[i]))
		i++;
	while (trimming(set, s1[j]))
		j--;
	return (new_string(s1, i, j - (i - 1)));
}

static char	*new_string(const char *s1, size_t start, size_t length)
{
	char	*string;
	size_t	i;

	i = 0;
	if (length <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	string = ft_calloc(length + 1, sizeof(char));
	if (!string)
		return (NULL);
	while (i < length)
	{
		string[i] = s1[start + i];
		i++;
	}
	return (string);
}
static int	trimming(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}
