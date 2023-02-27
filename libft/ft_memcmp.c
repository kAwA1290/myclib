/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:56:20 by skawai            #+#    #+#             */
/*   Updated: 2022/12/11 17:01:55 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, void const *s2, size_t n)
{
	unsigned char const	*hhu_s1;
	unsigned char const	*hhu_s2;

	hhu_s1 = (unsigned char const *)s1;
	hhu_s2 = (unsigned char const *)s2;
	while (n)
	{
		if (*hhu_s1 != *hhu_s2)
			return ((int)(*hhu_s1 - *hhu_s2));
		hhu_s1++;
		hhu_s2++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	char const	str1[] = "he\0\0\n";
	char const	str2[] = "he\0\0aoo,world";

	printf("%d\n", ft_memcmp(str1, str2, 19));
	printf("%d\n", memcmp(str1, str2, 19));
	printf("%d", '0' - 'a');
}
*/
