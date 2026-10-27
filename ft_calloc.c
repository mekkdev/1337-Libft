/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:50:42 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/26 11:32:44 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*new;
	size_t	len;

	if (size == 0 || count > SIZE_MAX / size)
		return (0);
	len = count * size;
	new = malloc(len);
	if (!(new))
		return (0);
	i = 0;
	while (i < len)
	{
		new[i] = 0;
		i++;
	}
	return (new);
}
