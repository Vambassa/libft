/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vambassa <vambassa@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 13:58:41 by vambassa          #+#    #+#             */
/*   Updated: 2021/10/11 21:11:51 by vambassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	if (dst == src)
		return (dst);
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 > src1)
	{
		while (len)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	else
	{
		while (len--)
			*dst1++ = *src1++;
	}
	return (dst);
}
