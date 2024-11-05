/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:03:15 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:49:46 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Concatenates two strings into a new string.
(char const *s1) > The first string.
(char const *s2) > The second string.
return (char *) > Pointer to the new string. */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		total_length;
	int		i;
	int		j;

	i = 0;
	j = 0;
	total_length = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	string = malloc(sizeof(char) * (total_length + 1));
	if (!string)
		return (NULL);
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		string[i + j] = s2[j];
		j++;
	}
	string[i + j] = '\0';
	return (string);
}
