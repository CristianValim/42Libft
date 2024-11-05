/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:24:37 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:46:04 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs a character to a file descriptor.
(char c) > The character to output.
(int fd) > The file descriptor.
return (void) > None. */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
