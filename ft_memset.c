/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:19:38 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/23 08:22:52 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *str; //string to be altered
	unsigned char replace; // 
	size_t count;

	str = (char *)b;
	replace = c;
	count = 0;
	while (count < len)
	{
		str[count] = replace;
		count++;
	}
	return (b);
}

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);
   
   return(0);
}
