/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 15:40:30 by juboyer           #+#    #+#             */
/*   Updated: 2019/06/04 12:52:04 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr(int n)
{
	char	v[10];
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar('0');
	while (nb > 0)
	{
		v[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(v[i]);
		i--;
	}
}
