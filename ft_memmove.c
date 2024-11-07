/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:57:19 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:02:35 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Copies memory area, handling overlap.
(void *dest) > Pointer to the destination memory area.
(const void *src) > Pointer to the source memory area.
(size_t n) > Number of bytes to copy.
return (void *) > Pointer to the destination memory area. */
void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*destine;

	source = (unsigned char *)src;
	destine = (unsigned char *)dest;
	if (!src && !dest)
		return (dest);
	if (destine > source && destine < source + len)
		while (len-- > 0)
			destine[len] = source[len];
	else
		ft_memcpy(dest, src, len);
	return (dest);
}
