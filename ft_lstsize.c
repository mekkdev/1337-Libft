/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:27:50 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/29 14:00:54 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int			i;
	t_list					*ptr;

	i = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
