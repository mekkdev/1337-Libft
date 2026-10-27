/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 06:52:32 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/24 07:08:06 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	*first;
	t_list	*second;
	t_list	*node;
	int	x;
	int	y;

	x = 0;
	y = 1;
	head = NULL;
	first = ft_lstnew(&x);
	second = ft_lstnew(&y);
	first->next = second;
	head = first;
	node = ft_lstlast(head);
	printf("content of last node: %d", *(int *)node->content);
}
*/
