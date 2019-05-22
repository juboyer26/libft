/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:35:22 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/22 13:30:41 by juboyer          ###   ########.fr       */
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
