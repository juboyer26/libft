/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 14:37:58 by juboyer           #+#    #+#             */
/*   Updated: 2019/05/28 13:33:43 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;
	int		i;

	i = 0;
	if (n == 0 || dst == src)
	{
		return (dst);
	}
	dst1 = (char *)dst;
	src1 = (char *)src;
	while (--n)
	{
		dst1[i] = src1[i];
		i++;
	}
	dst1[i] = src1[i];
	return (dst);
}
