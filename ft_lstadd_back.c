/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 07:09:12 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/26 11:30:00 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ptr = *lst;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

/*
#include <stdio.h>
int     main(void)
{
        t_list  *head;
        t_list  *first;
        t_list  *second;
        t_list  *node;
        int     x;
        int     y;
	int	z;

        x = 0;
        y = 1;
	z = 5;
        head = NULL;
        first = ft_lstnew(&x);
        second = ft_lstnew(&y);
        first->next = second;
        head = first;
	node = ft_lstnew(&z);
  	ft_lstadd_back(&head, node);
}
*/
