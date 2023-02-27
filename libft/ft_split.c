/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 09:09:32 by skawai            #+#    #+#             */
/*   Updated: 2023/01/27 18:48:43 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_strs(char const *s, char c)
{
	size_t	cnt;

	if (!s)
		return (0);
	cnt = 0;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			cnt++;
		else if (*(s + 1) == '\0' && *s != c)
			cnt++;
		s++;
	}
	return (cnt + 1);
}

static int	add_str(char **array, char const *s, size_t len, size_t i)
{
	array[i] = ft_substr(s, 0, len);
	if (!array[i])
	{
		if (i)
		{
			while (1)
			{
				free(array[i]);
				if (!i)
					break ;
				i--;
			}
		}
		free(array);
		return (1);
	}
	return (0);
}

static size_t	strlen_char(char const *s, char c, int f)
{
	size_t	len;

	len = 0;
	if (f)
		while (s[len] == c && s[len])
			len++;
	else
		while (s[len] != c && s[len])
			len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	**array;

	i = 0;
	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * count_strs(s, c));
	if (!array)
		return (NULL);
	while (*s)
	{
		s += strlen_char(s, c, 1);
		if (!*s)
			break ;
		len = strlen_char(s, c, 0);
		if (add_str(array, s, len, i++))
			return (NULL);
		s += len;
	}
	array[i] = NULL;
	return (array);
}
