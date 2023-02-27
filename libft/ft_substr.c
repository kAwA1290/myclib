/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:28:37 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 15:17:37 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t n1, size_t n2)
{
	if (n1 > n2)
		return (n2);
	return (n1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((size_t)start > slen)
		size = 0;
	else
		size = ft_min((slen - start), len);
	substr = malloc(sizeof(char) * size + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < size)
		substr[i++] = s[start++];
	substr[i] = '\0';
	return (substr);
}

//int	main(void)
//{
//	char	str[] = "substr-nande-toranai";
//
//	if (ft_substr(str, 20, 100) == "")
//		printf("%d", 1);
//}
