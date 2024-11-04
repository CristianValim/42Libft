/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:29:38 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/04 20:12:15 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_tab(char c);

int	ft_atoi(char *str)
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

static int	is_tab(char c)
{
	while ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
