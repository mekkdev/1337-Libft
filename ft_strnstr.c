/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 07:57:24 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/19 06:00:56 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;

	if (little[0] == '\0')
		return ((char *)big);
	len_little = ft_strlen(little);
	i = 0;
	while (i + len_little <= len && big[i])
	{
		if (ft_strncmp(big + i, little, len_little) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
