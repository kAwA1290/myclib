/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:30:29 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 18:04:45 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t n1, size_t n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

char	*ft_strnstr(char const *heystack, char const *needle, size_t len)
{
	size_t	i;
	size_t	n_len;

	i = 0;
	n_len = ft_strlen(needle);
	if (!heystack && !len)
		return (NULL);
	else if (!(*heystack) && (*needle))
		return (NULL);
	else if (!(*heystack) || !(*needle))
		return ((char *)&(*heystack));
	len = ft_min(ft_strlen(heystack), len);
	while ((i + n_len) <= len)
	{
		if (!ft_strncmp(&heystack[i], needle, n_len))
			return ((char *)&heystack[i]);
		i++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	printf("%p\n", strnstr("", "hello", 5));
	printf("%p\n", strnstr("", "", 0));
	printf("%p\n", strnstr("", "hello", 0));
	printf("%p\n", strnstr(NULL, "hello", 10)); //segfault
	printf("%p\n", strnstr(NULL, "hello", 0));  //null
	printf("%p\n", strnstr("heloirjgeorigjerogi", "hello", 111110));
}

*/
