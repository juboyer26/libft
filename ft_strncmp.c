/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:54:57 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/28 11:49:12 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int x;

	x = 0;
	while ((size_t)x < n && ((unsigned char)s1[x] != '\0') &&
			((unsigned char)s1[x] == (unsigned char)s2[x]))
		x++;
	return ((unsigned char)s1[x] - (unsigned char)s2[x]);
}
