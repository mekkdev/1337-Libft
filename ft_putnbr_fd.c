/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:09:59 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/20 09:03:19 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static	long	check_sign(int n)
{
	long	num;

	num = n;
	if (num > 0)
		return (num);
	else
		return (-num);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	sign;
	char	tab[50];
	long	num;

	sign = 'P';
	if (n < 0)
		sign = 'N';
	num = check_sign(n);
	i = 0;
	if (sign == 'N')
	{
		tab[i] = '-';
		i++;
	}
	while (num > 9)
	{
		tab[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	tab[i] = num + '0';
	while (i >= 0)
		write (fd, &tab[i--], 1);
}

int	main(void)
{
	ft_putnbr_fd(563, 1);
}
