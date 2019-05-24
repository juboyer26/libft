/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 07:21:36 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/24 08:19:20 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int			i;
	const char	*j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = s + i;
		i++;
	}
	if (s[i] == c)
		return ((char*)(s + i));
	return ((char*)j);
}

#include <stdio.h>

int     main()
{
    char s[] = "hello there everyone";
    int c = 'o';
    printf("%s", ft_strrchr(s, c));
    return (0);
}
