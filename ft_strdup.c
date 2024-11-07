/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 16:15:34 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/07 20:47:28 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Duplicates a string.
(const char *src) > The string to be duplicated.
return (char *) > Pointer to the duplicated string. */
char	*ft_strdup(const char *src)
{
	char	*duplicated;
	int		i;

	duplicated = ft_calloc(ft_strlen(src) + 1, sizeof(char));
	if (!duplicated)
		return (NULL);
	i = 0;
	while (src[i])
	{
		duplicated[i] = src[i];
		i++;
	}
	duplicated[i] = '\0';
	return (duplicated);
}
