/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 08:56:13 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/19 06:02:53 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	first(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		while (s1[i])
		{
			while (s1[i] == set[j])
			{
				i++;
				j = 0;
			}
			break ;
		}
		j++;
	}
	return (i);
}

static int	last(char const *s1, char const *set)
{
	int	j;
	int	k;

	j = 0;
	k = ft_strlen(s1) - 1;
	while (set[j])
	{
		while (k >= 0 && s1[k])
		{
			while (k >= 0 && s1[k] == set[j])
			{
				k--;
				j = 0;
			}
			break ;
		}
		j++;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*new;
	int		first_index;
	int		last_index;

	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	first_index = first(s1, set);
	last_index = last(s1, set);
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
