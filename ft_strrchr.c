/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:39:44 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/04 21:13:34 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s)
	{
		if (*s == c)
			result = (char *)s;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (result);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "AA\0B";

	printf("Found:%s\n", ft_strrchr(str, 'B'));
	printf("Found:%s\n", strrchr(str, 'B'));
	return (0);
} */