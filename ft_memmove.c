/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juboyer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:53:53 by juboyer           #+#    #+#             */
/*   Updated: 2019/06/03 15:44:00 by juboyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	i = len;
	if (src1 == NULL && dst1 == NULL)
		return (NULL);
	if (src1 < dst1)
		while (i--)
		{
			dst1[i] = src1[i];
		}
	else
		dst = ft_memcpy(dst1, src1, len);
	return (dst);
}
