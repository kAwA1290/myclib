/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:56:08 by skawai            #+#    #+#             */
/*   Updated: 2022/12/11 16:27:23 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	unsigned char		*hhu_dst;
	unsigned char const	*hhu_src;

	if (!dst && !src)
		return (NULL);
	hhu_dst = (unsigned char *)dst;
	hhu_src = (unsigned char const *)src;
	while (n)
	{
		*hhu_dst++ = *hhu_src++;
		n--;
	}
	return (dst);
}
