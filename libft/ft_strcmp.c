/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:51:44 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 16:19:07 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char const *s1, char const *s2)
{
	unsigned char const	*hhu_s1;
	unsigned char const	*hhu_s2;

	hhu_s1 = (unsigned char const *)s1;
	hhu_s2 = (unsigned char const *)s2;
	while (*hhu_s1 && *hhu_s2)
	{
		if (*hhu_s1 != *hhu_s2)
			return ((int)(*hhu_s1 - *hhu_s2));
		hhu_s1++;
		hhu_s2++;
	}
	return ((int)(*hhu_s1 - *hhu_s2));
}
