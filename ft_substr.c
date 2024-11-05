/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:29:06 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:52:52 by cvalim-d         ###   ########.fr       */
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
	char			*sub_string;
	unsigned int	string_lenght;
	size_t			i;

	i = 0;
	string_lenght = ft_strlen((char *)s);
	if (start >= string_lenght)
		return (ft_strdup(""));
	if (len > string_lenght - start)
		len = string_lenght - start;
	sub_string = malloc(sizeof(char) * len + 1);
	if (!sub_string)
		return (NULL);
	while (i < len)
		sub_string[i++] = s[start++];
	sub_string[len] = '\0';
	return (sub_string);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	const char *str = "Hello, World!";
	unsigned int start;
	size_t len;
	char *result;

	// Test 1: Extracting a valid substring
	start = 7;
	len = 5;
	result = ft_substr(str, start, len);
	printf("Test 1: '%s' -> Expected: '%s', Received: '%s'\n",
	str, "World",
		result);
	free(result); // Free allocated memory

	// Test 2: Start index out of bounds
	start = 15; // greater than the length of the string
	len = 5;
	result = ft_substr(str, start, len);
	printf("Test 2: '%s' -> Expected: '(null)', Received: '%s'\n", str,
		result ? result : "(null)");
	free(result); // Free allocated memory (if it wasn't NULL)

	// Test 3: Extracting to the end of the string
	start = 0;
	len = 20; // greater than the length of the string
	result = ft_substr(str, start, len);
	printf("Test 3: '%s' -> Expected: '%s', Received: '%s'\n", str, str,
		result);
	free(result); // Free allocated memory

	// Test 4: Extracting an empty substring
	start = 5;
	len = 0;
	result = ft_substr(str, start, len);
	printf("Test 4: '%s' -> Expected: '', Received: '%s'\n", str, result);
	free(result); // Free allocated memory

	return (0);
} */