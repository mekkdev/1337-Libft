/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:35:32 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/19 06:39:23 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int	word_counter(char *s, char c)
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

int	main(void)
{
	word_counter("", 'c');
}

/*
char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	firt_index;
	char	**new;

	i = 0;
	j = 0;
	
	new = (char**)(malloc((num_words(str) + 1) * sizeof(char *));

	}
}
*/
