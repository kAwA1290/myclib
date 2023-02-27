/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:55:48 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 15:47:37 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	unsigned char		*hhu_dst;
	unsigned char const	*hhu_src;

	if (!dst && !src)
		return (NULL);
	hhu_dst = (unsigned char *)dst;
	hhu_src = (unsigned char const *)src;
	if (len)
	{
		if (dst > src)
		{
			hhu_dst += len - 1;
			hhu_src += len - 1;
			while (len--)
				*hhu_dst-- = *hhu_src--;
		}
		else
		{
			while (len--)
				*hhu_dst++ = *hhu_src++;
		}
	}
	return (dst);
}
