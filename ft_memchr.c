/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:07:10 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:02:27 by cvalim-d         ###   ########.fr       */
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
