/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:39:44 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/04 20:02:13 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = "";
	while (*s)
	{
		if (*s == c)
			result = (char *)s;
		s++;
	}
	return (result);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "abcde abcdefg";

	printf("Found:%s\n", ft_strrchr(str, '\0'));
	printf("Found:%s\n", strrchr(str, '\0'));
	return (0);
} */