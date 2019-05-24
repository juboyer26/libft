/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:35:22 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/24 15:41:12 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

ft_isalnumb.c
int		main()
{
	printf("%i", ft_isalnumb('-'));
	return (0);
}

ft_isalpha.c
int		main()
{
	printf("%i", ft_isalpha('-'));
	return (0);
}
ft_isascii.c

ft_isdigit.c
int		main(void)
{
	printf("%i", ft_isdigit(51));
	return (0);
}

ft_isprint.c

ft_tolower.c
int		main()
{
	printf("%i", ft_tolower(65));
	return (0);
}

ft_toupper.c
int		main()
{
	printf("%i", ft_toupper(97));
	return (0);
}

ft_putstr.c
int		main()
{
	ft_putstr("hello");
	return (0);
}

ft_strcpy.c
int		main(void)
{
	char dest[100];

    printf("%s", ft_strcpy(dest,"hello" ));
	return (0);
}
or
int		main(void)
{
	char *str;
	char s1[] = "hey";
	char s2[] = "HELLO";
	str	= ft_strcpy(s1, s2);
	printf("%s", str);
	return (0);
}

ft_atoi
int		main(void)
{
	printf("%i", ft_atoi("0009"));
	return (0);
}

ft_strdup
int		main()
{
	char *j;
	j = ft_strdup("hello");
	printf("%s", j);
	return (0);
}

ft_stncpy
int		main(void)
{
	char src[] = "hey";
	char dst[] = "replace";
	size_t i;

	i = strlen(src);
	printf("%s", ft_strncpy(dst, src, i));
	return (0);
}

ft_strcmp
int		main()
{
	char src[] = "hey";
	char dst[] = "replace";

	printf("%d", ft_strcmp(dst, src));
	return (0);
}

ft_strcat.c
#include <stdio.h>
int     main()
{
    char s1[50] = "Good";
    char s2[] = " Morning";
    printf("%s", ft_strcat(s1, s2));
    return (0);
}

ft_strncat.c
int     main()
{
    char s1[] = "hello";
    char s2[] = " world";
    size_t i;

    i = 2;
    printf("%s", ft_strncat(s1, s2, i));
    return (0);
}

ft_strncpy
int     main()
{
    char s1[] = "bello";
    char s2[] = "aorld";
    size_t i;

    i = 3;
    printf ("%d", ft_strncmp(s1, s2, i));
    return (0);
}

ft_strchr.c
#include <stdio.h>

int main()
{
    char s[] = "hello this is justine";
    int c = 'j';
    printf("%s", ft_strchr(s, c));
    return (0);
}

ft_strdup.c

int		main()
{
	char *str = ft_strdup("justine");
	ft_putstr(str);
}

ft_strrchr.c
#include <stdio.h>

int		main()
{
	char s[] = "hello there everyone";
	int c = 'o';
	printf("%s", ft_strrchr(s, c));
	return (0);
}
