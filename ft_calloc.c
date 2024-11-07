/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:31:59 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:02:22 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Allocates memory for an array and initializes it to zero.
(size_t nmemb) > Number of elements.
(size_t size) > Size of each element.
return (void *) > Pointer to the allocated memory or NULL if allocation fails.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*zero_setted;
	size_t			i;

	i = 0;
	zero_setted = malloc(nmemb * size);
	if (!zero_setted)
		return (NULL);
	while (i < nmemb * size)
	{
		zero_setted[i++] = 0;
	}
	return (zero_setted);
}
