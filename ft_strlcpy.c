/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:12:38 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 15:55:24 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies a string to another, with size limitations.
(char *dest) > The destination string.
(const char *src) > The source string.
(size_t size) > The total size of the destination buffer.
return (size_t) > Total length of the string they tried to create. */
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	const char	*src_start = src;

	if (size != 0)
	{
		while (--size != 0)
		{
			*dest = *src;
			if (*src == '\0')
				return (src - src_start);
			dest++;
			src++;
		}
		if (size == 0)
			*dest = '\0';
	}
	while (*src)
		src++;
	return (src - src_start);
}
