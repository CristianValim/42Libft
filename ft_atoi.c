/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:29:38 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/06 00:07:39 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_tab(char c);

/* Converts the initial portion of the string pointed to by str to int.
(char *str) > The string to be converted to int.
return ((int)num * sign); > The converted value or 0 if no valid conversion
could be performed. */
int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	sign = 1;
	num = 0;
	while (is_tab(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (ft_isdigit(*str))
	{
		num = (num * 10) + *str - '0';
		str++;
	}
	return ((int)num * sign);
}

/* Checks if the character is a whitespace or tab.
(char c) > The character to be checked.
return (int) > 1 if the character is a whitespace or tab, 0 otherwise. */
static int	is_tab(char c)
{
	while ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
/*
int	main(void)
{
	const char *test1 = "42";
	const char *test2 = "   -42";
	const char *test3 = "4193 with words";
	const char *test4 = "words and 987";
	const char *test5 = "-91283472332";

	printf("Test 1: \"%s\" -> Expected: 42, Received: %d\n", test1,
		ft_atoi(test1));
	printf("Test 2: \"%s\" -> Expected: -42, Received: %d\n", test2,
		ft_atoi(test2));
	printf("Test 3: \"%s\" -> Expected: 4193, Received: %d\n", test3,
		ft_atoi(test3));
	printf("Test 4: \"%s\" -> Expected: 0, Received: %d\n", test4,
		ft_atoi(test4));
	printf("Test 5: \"%s\" -> Expected: -2147483648, Received: %d\n", test5,
		ft_atoi(test5));

	return (0);
} */