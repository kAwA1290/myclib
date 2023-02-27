/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:30:16 by skawai            #+#    #+#             */
/*   Updated: 2022/12/11 17:38:50 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	size_t			len;
	unsigned char	hhu_c;

	len = ft_strlen(s);
	hhu_c = (unsigned int)c;
	while (1)
	{
		if (s[len] == hhu_c)
			return ((char *)&s[len]);
		if (!len)
			break ;
		len--;
	}
	return (NULL);
}
