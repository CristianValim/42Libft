/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:17:02 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/10/28 16:30:43 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dest[dsize] != '\0' && dsize < size)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize + 1 < size)
	{
		dest[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < size)
		dest[dsize] = '\0';
	return (i + strlen(src));
}

int	main(void)
{
	char dest1[20] = "Hello";
	char src1[] = " World";
	unsigned int size1 = 20;

    strcpy(dest1, "Hello");

	unsigned int result1 = strlcat(dest1, src1, size1);
	unsigned int result2 = ft_strlcat(dest1, src1, size1);
	printf("Test 1:\nstrlcat: %u, ft_strlcat: %u, Result: %s\n", result1,
		result2, dest1);

	strcpy(dest1, "Hello");

	char dest2[20] = "Hello";
	char src2[] = " World! This is a test.";
	unsigned int size2 = 10;

	unsigned int result3 = strlcat(dest2, src2, size2);
	unsigned int result4 = ft_strlcat(dest2, src2, size2);
	printf("Test 2:\nstrlcat: %u, ft_strlcat: %u, Result: %s\n", result3,
		result4, dest2);

	strcpy(dest2, "Hello");

	char dest3[20] = "Hello";
	char src3[] = " World";
	unsigned int size3 = 0;

	unsigned int result5 = strlcat(dest3, src3, size3);
	unsigned int result6 = ft_strlcat(dest3, src3, size3);
	printf("Test 3:\nstrlcat: %u, ft_strlcat: %u, Result: %s\n", result5,
		result6, dest3);

	char dest4[20] = "";
	char src4[] = "Hello";
	unsigned int size4 = 20;

	unsigned int result7 = strlcat(dest4, src4, size4);
	unsigned int result8 = ft_strlcat(dest4, src4, size4);
	printf("Test 4:\nstrlcat: %u, ft_strlcat: %u, Result: %s\n", result7,
		result8, dest4);

	char dest5[20] = "Hello";
	char src5[] = " World";
	unsigned int size5 = 5;

	unsigned int result9 = strlcat(dest5, src5, size5);
	unsigned int result10 = ft_strlcat(dest5, src5, size5);
	printf("Test 5:\nstrlcat: %u, ft_strlcat: %u, Result: %s\n", result9,
		result10, dest5);

	return (0);
}