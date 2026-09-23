/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:21:45 by himekkao          #+#    #+#             */
/*   Updated: 2026/09/23 11:21:45 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int c)
{
	char	sign;
	int	len_tab;
	char	tab[20];
	int	i;
	int	j;
	char	*new;
	long	num;

	num = c;
	sign = 'P';
	if (num < 0)
	{
		sign = 'N';
		num = -num;
	}
	if (sign == 'N')
	{
		tab[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (num > 9)
	{
		tab[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	tab[i] = num + '0';
	tab[i + 1] = '\0';
	len_tab = ft_strlen(tab);
	new = malloc(sizeof(char) * (len_tab + 1));
	if (!(new))
		return (0);
	if (tab[0] == '-')
	{
		i = 1;
		new[0] = '-';
	}
	else
		i = 0;
	j = len_tab - 1;
	while (i < len_tab)
	{
		new[i] = tab[j];
		i++;
		j--;
	}
	new[i] = '\0';
	return (new);
}
