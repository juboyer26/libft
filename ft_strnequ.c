/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:39:58 by juboyer           #+#    #+#             */
/*   Updated: 2019/06/17 15:53:25 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	if (s1 && s2)
		return (!ft_strncmp(s1, s2, len));
	return (0);
}

int main()
{
	ft_putnbr(ft_strnequ("hello", "hello", 10));
	ft_putchar('\n');
}
