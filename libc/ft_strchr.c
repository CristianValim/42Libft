/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:30:57 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/01 16:31:57 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "Don't Panic!";

	printf("Found:%s\n", ft_strchr(str, ' '));
	printf("Found:%s\n", strchr(str, ' '));
	return (0);
} */
