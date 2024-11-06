/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:12:38 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/06 00:16:38 by cvalim-d         ###   ########.fr       */
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
			if (size != 0)
				*dest = '\0';
	}
	while (*src)
		src++;
	return (src - src_start);
}

/* #include <stdio.h>

int	main(void)
{
	char			str_old[] = "Hello World, Don't Panic!";
	char			str_new[12];
	unsigned int	length;

	length = ft_strlcpy(str_new, str_old, sizeof(str_new));
	printf("New string is: %s\n", str_new);
	printf("Length of original string: %u\n", length);
	return (0);
} */