/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:39:10 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:42:27 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies memory area.
(void *dest) > Pointer to the destination memory area.
(const void *src) > Pointer to the source memory area.
(size_t n) > Number of bytes to copy.
return (void *) > Pointer to the destination memory area. */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destine;
	unsigned char	*source;

	destine = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n > 0)
	{
		*(destine++) = *(source++);
		n--;
	}
	return (dest);
}

/* #include <stdio.h>

int	main(void)
{
	char src[] = "Don't Panic!";
	char dest[50];

	ft_memcpy(dest, src, 13);
	printf("Test 1 - Copied string: %s\n", dest);

	char overlap_src[] = "1234567890";
	ft_memcpy(overlap_src + 4, overlap_src, 6);
	printf("Test 2 - Overlapping memory: %s\n", overlap_src);

	char block_src[] = {1, 2, 3, 4, 5};
	char block_dest[5];
	ft_memcpy(block_dest, block_src, sizeof(block_src));
	printf("Test 3 - Block copied: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", block_dest[i]);
	}
	printf("\n");

	char empty_src[] = "Test";
	char empty_dest[50];
	ft_memcpy(empty_dest, empty_src, 0);
	printf("Test 4 - Copying zero bytes: %s\n", empty_dest);
} */