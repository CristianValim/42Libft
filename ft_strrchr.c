/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:39:44 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:07:05 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Locates the last occurrence of a character in a string.
(const char *s) > The string to search in.
(int c) > The character to locate.
return (char *) > Pointer to the last occurrence of the character or
NULL if not found. */
char	*ft_strrchr(const char *s, int c)
{
	char	*last_char;

	last_char = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_char = (char *)s;
		s++;
	}
	if (*s == (char)c)
		last_char = (char *)s;
	return (last_char);
}
