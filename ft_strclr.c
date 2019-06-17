/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 12:36:18 by juboyer           #+#    #+#             */
/*   Updated: 2019/06/17 15:13:26 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	bzero(s, ft_strlen(s));
}

int main()
{
	
	char str[100] = "Treytuing\0T"; 

		ft_strclr(str);
		for (int i = 0; i < 12; i++)
		{
			if (str[i] == '\0')
				ft_putchar('J');
			else
				ft_putchar(str[i]);
			ft_putchar('\n');
		} 
}
