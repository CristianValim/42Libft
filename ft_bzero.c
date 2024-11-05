/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:31:21 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:37:04 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Sets all bytes of a memory area to zero.
(void *s) > Pointer to the memory area.
(size_t n) > Number of bytes to set to zero.
return (void) > None. */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n > 0)
	{
		*(str++) = '\0';
		n--;
	}
}

/* #include <stdio.h>

int	main(void)
{
	char str[12] = "Don't Panic!";
	printf("Before ft_bzero(): %s\n", str);

	ft_bzero(str + 6, 6);

	printf("After ft_bzero():  %s\n", str);
	return (0);
} */