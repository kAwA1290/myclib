/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:52:10 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 17:55:31 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	unsigned char		hhu_c;

	hhu_c = (unsigned char)c;
	while (1)
	{
		if (*s == hhu_c)
			return ((char *)s);
		if (!*s)
			break ;
		s++;
	}
	return (NULL);
}
