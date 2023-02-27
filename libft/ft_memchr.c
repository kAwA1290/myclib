/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:57:23 by skawai            #+#    #+#             */
/*   Updated: 2022/12/11 17:16:04 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *s, int c, size_t n)
{
	unsigned char const	*hhu_s;
	unsigned char		hhu_c;

	hhu_s = (unsigned char const *)s;
	hhu_c = (unsigned char)c;
	while (n)
	{
		if (*hhu_s == hhu_c)
			return ((void *)hhu_s);
		hhu_s++;
		n--;
	}
	return (NULL);
}
