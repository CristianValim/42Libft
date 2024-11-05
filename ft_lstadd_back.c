/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalim-d <cvalim-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:57:30 by cvalim-d          #+#    #+#             */
/*   Updated: 2024/11/05 20:36:27 by cvalim-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Adds an element at the end of a linked list.
(t_list **lst) > Pointer to the first element of the list.
(t_list *new) > The new element to add.
return (void) > None. */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		*lst = new;
	last->next = new;
	last = ft_lstlast(*lst);
}
