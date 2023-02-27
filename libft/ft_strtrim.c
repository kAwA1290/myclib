/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:28:47 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 16:20:34 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const c, char const *set)
{
	while (*set != '\0')
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_str;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (check_set(*s1, set) && *s1)
		s1++;
	len = ft_strlen(s1);
	while (len && check_set(s1[len - 1], set))
		len--;
	trimmed_str = malloc(sizeof(char) * (len + 1));
	if (!trimmed_str)
		return (NULL);
	ft_strlcpy(trimmed_str, s1, (len + 1));
	return (trimmed_str);
}

//int	main(void)
//{
//	printf("%s\n", ft_strtrim("hello, world", "d"));
//	printf("%s\n", ft_strtrim("hello, worlddddd", "d"));
//	printf("%s\n", ft_strtrim("hello, worlddll", "dl"));
//	printf("%s\n", ft_strtrim("a", "allgeroijgeroig"));
//	return (0);
//}
