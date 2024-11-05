/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:15:34 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:49:16 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Duplicates a string.
(char *src) > The string to be duplicated.
return (char *) > Pointer to the duplicated string. */
char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_length;
	int		i;

	i = 0;
	src_length = ft_strlen(src);
	dest = malloc(src_length + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
