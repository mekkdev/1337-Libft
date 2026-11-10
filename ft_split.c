/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:35:32 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/19 10:49:40 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_counter(const char *s, char c)
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

static void	free_words(char **words, int count)
{
	while (count-- > 0)
		free(words[count]);
	free(words);
}

static char	*copy_word(const char *s, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (s[len] && s[len] != c)
	{
		word[len] = s[len];
		len++;
	}
	word[len] = '\0';
	return (word);
}

static int	fill_words(char **words, const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		words[j] = copy_word(&s[i], c);
		if (!words[j])
		{
			free_words(words, j);
			return (0);
		}
		j++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		count;

	if (!s)
		return (NULL);
	count = word_counter(s, c);
	new = malloc(sizeof(char *) * (count + 1));
	if (!new)
		return (NULL);
	if (!fill_words(new, s, c))
		return (NULL);
	new[count] = NULL;
	return (new);
}
