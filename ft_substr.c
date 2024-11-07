/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:29:06 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:03:02 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Extracts a substring from a string.
(char const *s) > The original string.
(unsigned int start) > The starting index.
(size_t len) > The length of the substring.
return (char *) > Pointer to the substring. */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_string;
	size_t	string_length;

	if (!s)
		return (NULL);
	string_length = ft_strlen(s);
	if (start >= string_length)
		return (ft_strdup(""));
	if (len > string_length - start)
		len = string_length - start;
	sub_string = ft_calloc(len + 1, sizeof(char));
	if (!sub_string)
		return (NULL);
	ft_strlcpy(sub_string, s + start, len + 1);
	return (sub_string);
}
