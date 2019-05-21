/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:06:48 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/21 14:48:26 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>  /*please do not forget to delete here :)*/

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int		main(void)
{
	char dest[100];

    printf("%s", ft_strcpy(dest,"hello" ));
	return (0);
}
