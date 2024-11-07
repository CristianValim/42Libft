/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:39:10 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:02:32 by cvalim-d         ###   ########.fr       */
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
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		*(destine++) = *(source++);
		n--;
	}
	return (dest);
}
