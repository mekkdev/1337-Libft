/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:21:45 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/17 11:08:20 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long num)
{
	int	len;

	len = 1;
	if (num < 0)
	{
		len++;
		num = -num;
	}
	while (num > 9)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static void	write_number(char *str, long num, int len)
{
	int	negative;

	negative = num < 0;
	if (negative)
	{
		str[0] = '-';
		num = -num;
	}
	str[len] = '\0';
	while (len-- > negative)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*new;
	int		len;

	len = digit_count(n);
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	write_number(new, n, len);
	return (new);
}
