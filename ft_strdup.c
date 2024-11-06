/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:15:34 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/06 00:45:00 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Duplicates a string.
(const char *src) > The string to be duplicated.
return (char *) > Pointer to the duplicated string. */
char	*ft_strdup(const char *src)
{
	char	*result;
	char	*duplicated;
	int		src_length;

	duplicated = result;
	src_length = ft_strlen(src);
	result = ft_calloc(src_length + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*src)
		*duplicated++ = *src++;
	*duplicated = '\0';
	return (result);
}
