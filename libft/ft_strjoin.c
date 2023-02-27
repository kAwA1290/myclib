/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:50:25 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 15:37:32 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1len;
	size_t	s2len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	str = malloc(sizeof(char) * (s1len + s2len));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, (s1len + 1));
	ft_strlcat((str + s1len), s2, (s2len + 1));
	return (str);
}

//#include <stdio.h>
//int	main(void)
//{
//	char str1[] = "bbbbb";
//	char str2[] = "aaaaa";
//	printf("%s", ft_strjoin(str1, str2));
//	return (0);
//}
