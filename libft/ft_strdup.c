/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:51:33 by skawai            #+#    #+#             */
/*   Updated: 2022/12/03 00:51:34 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s1)
{
	char	*dst;

	dst = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s1, ft_strlen(s1) + 1);
	return (dst);
}
