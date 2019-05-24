/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 07:57:51 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/23 11:33:32 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
	int i;
	char *dest;

	i = 0;
	while (s1[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(char) * (i + 1));
	dest[i] = '\0';
	i--;
	while (i >= 0)
	{
		dest[i] = s1[i];
		i--;
	}
	return (dest);
}

void test_mystrdup()
{
    char *str = ft_strdup("justine");
    ft_putstr(str);
}


int main()
{
    test_mystrdup();
    
    while(1) {
    //`do nothin!!
    }
}
