/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 08:50:58 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/27 10:49:59 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*new_node(void *content, void (*del)(void *))
{
	t_list	*node;

	node = ft_lstnew(content);
	if (!node)
		del(content);
	return (node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*content;
	t_list	*node;

	if (!f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_lstclear(&head, del), NULL);
		node = new_node(content, del);
		if (!node)
			return (ft_lstclear(&head, del), NULL);
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}
