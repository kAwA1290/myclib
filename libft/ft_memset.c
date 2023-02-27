/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:55:34 by skawai            #+#    #+#             */
/*   Updated: 2022/12/11 16:37:02 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*hhu_b;
	unsigned char	hhu_c;

	hhu_b = (unsigned char *)b;
	hhu_c = (unsigned char)c;
	while (len)
	{
		*hhu_b++ = hhu_c;
		len--;
	}
	return (b);
}
