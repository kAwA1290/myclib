/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shozokawai <shozokawai@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:42:05 by skawai            #+#    #+#             */
/*   Updated: 2022/12/06 18:31:51 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t n1, size_t n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

size_t	ft_strlcat(char *dst, char const *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;
	size_t	res;

	i = 0;
	srclen = ft_strlen(src);
	if (!dstsize)
		return (srclen);
	dstlen = ft_strlen(dst);
	res = srclen + ft_min(dstsize, dstlen);
	while (src[i] && (dstlen + 1) < dstsize)
		dst[dstlen++] = src[i++];
	dst[dstlen] = '\0';
	return (res);
}
/*
#include <stdlib.h>
#include <string.h>
int	main(void)
{
	char	*dst;
	char	*dst2;
	char	src[] = "hello,world";

	for (int j = 0; j < 100; j++)
	{
		dst = calloc(100, sizeof(char));
		dst2 = calloc(100, sizeof(char));
		for (int i = 0; i < 34; i++)
		{
			dst[i] = 'x';
			dst2[i] = 'x';
			if (i == 33)
			{
				dst = NULL;
				dst2 = NULL;
			}
		}
		printf("        j %d\n", j);
		printf("result_ft %zu\n", ft_strlcat(dst, src, j));
		printf("result    %zu\n", strlcat(dst2, src, j));
		printf("      dst %s\n", dst);
		printf("     dst2 %s\n", dst2);
		printf("result_ft_NULL %zu\n", ft_strlcat(NULL, src, j));
		free(dst);
		free(dst2);
	}
	return (0);
}
*/
//res = min(dstsize, dstlen) + srclen;
