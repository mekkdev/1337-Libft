/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 07:53:24 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/26 11:29:23 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	del(void content)
{
	free(content);
}
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (*lst)
		return ;
	del(lst->content);
	free(lst);
}
