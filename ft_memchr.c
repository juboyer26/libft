/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:36:08 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/29 12:28:54 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (n > i)
	{
		if (str[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

int main(int argc, const char * argv[])
{
    char search[] = "TechOnTheNet";
    char *ptr;

    /* Return a pointer to the first 'N' within the search string */
    ptr = (char*)ft_memchr(search, 'N', strlen(search));

    /* If 'N' was found, print its location (This should produce "10") */
    if (ptr != NULL) printf("Found 'N' at position %ld.\n", 1+(ptr-search));
    else printf("'N' was not found.\n");

    return 0;
}
