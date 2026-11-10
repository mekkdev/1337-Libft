/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: himekkao <himekkao@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 07:09:59 by himekkao          #+#    #+#             */
/*   Updated: 2026/10/20 09:03:19 by himekkao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	tab[12];
	long	num;

	num = n;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	i = 0;
	while (num > 9)
	{
		tab[i++] = (num % 10) + '0';
		num = num / 10;
	}
	tab[i] = num + '0';
	while (i >= 0)
		write(fd, &tab[i--], 1);
}
