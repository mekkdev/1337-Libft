/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:35:32 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/19 10:49:40 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	word_counter(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			words++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	first_index;
	char	**new;
	int	word_len;
	
	i = 0;
	j = 0;
	if (!s)
		return (0);
	new = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!new)
		return (0);
	while (s[i])
	{
		word_len = 0;
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		first_index = i;
		while (s[i] && s[i] != c)
		{
			word_len++;
			i++;
		}
		new[j] = malloc(sizeof(char) * (word_len + 1));
		if (!new[j])
		{
			while(j > 0)
				free (new[--j]);
			free(new);
			return (NULL);
		}
		k = 0;
		while (word_len > k)
		{
			new[j][k] = s[first_index + k];
			k++;
		}
		new[j][k] = '\0';
		j++;
	}
	new[j] = (NULL);
		return (new);
}

int	main(void)
{
	char	**test;
	int	i;

	test = ft_split(" hicham  mekk   ", ' ');
	if (!test)
		return (1);
	i = 0;
	while (test[i])
	{
		printf("string : %s \n", test[i]);
		free(test[i]);
		i++;
	}	
	free (test);
	return (0);
}
