/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:11:42 by juboyer           #+#    #+#             */
/*   Updated: 2019/06/12 15:54:23 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *haystack = NULL;
	char *needle = NULL;

	if (argc == 3)
	{
		printf("standard strstr: %s\n", strstr(argv[1], argv[2]));
		printf("Libft strstr: %s\n", ft_strstr(argv[1], argv[2]));
	}
	return (0);
}
