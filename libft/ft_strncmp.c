/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:36:37 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 15:49:38 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char const *s1, char const *s2, size_t n)
{
	unsigned char const	*hhu_s1;
	unsigned char const	*hhu_s2;

	hhu_s1 = (unsigned char const *)s1;
	hhu_s2 = (unsigned char const *)s2;
	while (n)
	{
		if (*hhu_s1 != *hhu_s2 || (!*hhu_s1 || !*hhu_s2))
			return ((int)(*hhu_s1 - *hhu_s2));
		hhu_s1++;
		hhu_s2++;
		n--;
	}
	return (0);
}
