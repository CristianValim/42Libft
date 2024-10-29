/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:39:44 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/10/29 21:04:32 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (result);
}
/* 
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "abcde abcdefg";

	printf("Found:%s\n", ft_strrchr(str, 'a'));
	printf("Found:%s\n", strrchr(str, 'a'));
	return (0);
} */