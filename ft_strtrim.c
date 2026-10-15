/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:56:13 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/15 08:56:13 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char		*new;
	int		first_index;
	int		last_index;

	i = 0;
	j = 0;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	// first index
	while (set[j])
	{
		while (s1[i])
		{
			while (s1[i] == set[j])
			{
				i++;
				j = 0;
			}
			break;
		}
		j++;
	}
	first_index = i;
	// last index
	j = 0;
	k = ft_strlen(s1) - 1;
	while (set[j])
	{
		while (k >= 0 && s1[k]) // C does not evaluate s1[-1]
		{
			while (k >= 0 && s1[k] == set[j])
			{
				k--;
				j = 0;
			}
			break;
		}
		j++;
	}
	last_index = k;
	if (first_index > last_index)
		return (ft_strdup(""));
	len = (last_index - first_index) + 1;
	new = malloc(sizeof(char) * len + 1);
	if (!(new))
		return (0);

	i = 0;
	while (first_index <= last_index)
	{
		new[i] = s1[first_index];
		i++;
		first_index++;
	}
	new[i] = '\0';
	return (new);
}
