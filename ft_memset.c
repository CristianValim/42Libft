/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:47:01 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:02:39 by cvalim-d         ###   ########.fr       */
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
