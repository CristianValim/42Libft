/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:47:01 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/06 00:11:34 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Fills memory with a constant byte.
(void *s) > Pointer to the memory area.
(int c) > Byte value to set.
(size_t len) > Number of bytes to set.
return (void *) > Pointer to the memory area. */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_str;

	tmp_str = (unsigned char *)b;
	while (len > 0)
	{
		*(tmp_str++) = (unsigned char)c;
		len--;
	}
	return (b);
}

/* #include <stdio.h>

int	main(void)
{
	char str[12] = "Don't Panic!";
	printf("Before ft_memset(): %s\n", str);

	ft_memset(str + 6, '@', 5 * sizeof(char));

	printf("After ft_memset():  %s\n", str);
	printf("Ret is:  %s\n", ft_memset(str + 6, '@', 5 * sizeof(char)));
	return (0);
} */