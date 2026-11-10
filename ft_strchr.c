/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 13:14:30 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/26 11:28:28 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	uc = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == uc)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char)s[i] == uc)
		return ((char *)&s[i]);
	return (0);
}
