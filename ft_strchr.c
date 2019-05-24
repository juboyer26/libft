/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:24:00 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/24 07:55:30 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
   int i;

   i = 0;
   while (s[i] != '\0')
   {
       if (s[i] == (char)c)
            return ((char *)&s[i]);
       i++;
   }
   return (NULL);
}

#include <stdio.h>

int main()
{
    char s[] = "hello this is justine";
    int c = 'j';
    printf("%s", ft_strchr(s, c));
    return (0);
}
