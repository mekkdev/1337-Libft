/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 06:10:03 by himekkao          #+#    #+#             */
/*   Updated: 2026/09/29 06:10:03 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*new;
	size_t		len_s;
	size_t		i;

	new = malloc(sizeof(char) * (len + 1));
	if (!(new))
		return (0);
	len_s = ft_strlen(s);
	if (start >= len_s)
	{
		new[0] = '\0';
		return (new);
	}
	i = 0;
	while(i < len && start < len_s)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
