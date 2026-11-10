/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 15:31:31 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/15 14:57:54 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;
	size_t	j;

	i = 0;
	while (i < dstsize && dst[i])
		i++;
	if (i == dstsize)
		return (dstsize + ft_strlen(src));
	len_dst = i;
	len_src = ft_strlen(src);
	i = 0;
	j = len_dst;
	if (dstsize > len_dst + 1)
	{
		while (src[i] && i < dstsize - len_dst - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (len_src + len_dst);
}
