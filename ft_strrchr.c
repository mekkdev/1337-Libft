/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 14:25:27 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/17 09:34:41 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	size_t			len;
	unsigned char	uc;

	uc = (unsigned char)c;
	len = ft_strlen(s);
	i = len;
	while (1)
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
		if (i == 0)
			break ;
		i--;
	}
	return (NULL);
}
