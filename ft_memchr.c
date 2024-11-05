/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:07:10 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:40:25 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Scans memory for a character.
(const void *s) > Pointer to the memory area.
(int c) > Character to search for.
(size_t n) > Number of bytes to scan.
return (void *) > Pointer to the matching byte or NULL if not found. */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	search;
	size_t			i;

	str = (unsigned char *)s;
	search = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == search)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int	main(void) {
	const char *str = "Don't Panic!";

	printf("Test 1: Searching for 'P' in \"%s\"\n", str);
	printf("Expected: %p\n", memchr(str, 'P', strlen(str)));
	printf("Result: %p\n\n", ft_memchr(str, 'P', strlen(str)));

	printf("Test 2: Searching for 'D' in \"%s\"\n", str);
	printf("Expected: %p\n", memchr(str, 'D', strlen(str)));
	printf("Result: %p\n\n", ft_memchr(str, 'D', strlen(str)));

	printf("Test 3: Searching for 'o' in \"%s\"\n", str);
	printf("Expected: %p\n", memchr(str, 'o', strlen(str)));
	printf("Result: %p\n\n", ft_memchr(str, 'o', strlen(str)));

	printf("Test 4: Searching for 'z' in \"%s\"\n", str);
	printf("Expected: %p\n", memchr(str, 'z', strlen(str)));
	printf("Result: %p\n\n", ft_memchr(str, 'z', strlen(str)));

	printf("Test 5: Searching for 'D' in \"%s\" with n = 0\n", str);
	printf("Expected: %p\n", memchr(str, 'D', 0));
	printf("Result: %p\n\n", ft_memchr(str, 'D', 0));

	return (0);
} */