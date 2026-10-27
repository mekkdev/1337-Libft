/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 08:50:58 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/27 10:49:59 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	*f(void	*content)
{
	int	*result;
	
	result = malloc(sizeof(int));
	if (!result)
		return NULL;
	*result = *(int *)content + 1;
	return (result);
}

void	del(void *content)
{
	free(content);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*new_content;

	head = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (!node)
		{
			del(new_content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}

/*
#include <stdio.h>
int	main(void)
{
	t_list	*head;
	t_list	*first;
	t_list	*second;
	t_list	*new_node;
	int	x;
	int	y;

	x = 0;
	y = 1;
	head = NULL;
	first = malloc(sizeof(t_list));
	if (!first)
		return 1;
	second = malloc(sizeof(t_list));
	if (!second)
		return 1;
	head = first;
	first->content = &x;
	second->content = &y;
	second->next = NULL;
	first->next = second;
	new_node = ft_lstmap(first, f, del);
	printf("%d", *(int *)new_node->content);
	printf("%d", *(int *)new_node->next->content);	
}
*/
