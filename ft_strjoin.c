/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:03:15 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 23:40:32 by cvalim-d         ###   ########.fr       */
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
	int		s1_len;
	int		s2_len;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_length = s1_len + s2_len;
	string = ft_calloc(total_length + 1, sizeof(char));
	if (!string)
		return (NULL);
	ft_strlcpy(string, s1, s1_len + 1);
	ft_strlcpy(string + s1_len, s2, s2_len + 1);
	return (string);
}
