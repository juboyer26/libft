/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:11:42 by juboyer           #+#    #+#             */
/*   Updated: 2019/06/14 10:50:28 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char  *s = NULL;
	char *s2 = NULL;

	if (argc == 3)
	{
		printf("standard strsplit: %s\n", strstr(argv[1], argv[2]));
		printf("Libft strsplit: %s\n", ft_strsplit(argv[1], argv[2]));
	}
	return (0);
}
