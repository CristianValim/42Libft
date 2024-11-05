/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:12:38 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:50:20 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies a string to another, with size limitations.
(char *dest) > The destination string.
(char *src) > The source string.
(unsigned int size) > The total size of the destination buffer.
return (unsigned int) > Total length of the string they tried to create. */
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
	{
		i = 0;
		while (src[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
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