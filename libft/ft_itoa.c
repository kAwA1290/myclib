/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 23:54:38 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 14:54:58 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_numlen(long n, int flag)
{
	if (flag && !n)
		return (1);
	else if (flag && n < 0)
		return (1 + ft_numlen(n, 0));
	else if (n)
		return (1 + ft_numlen(n / 10, 0));
	return (0);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	long	num;
	char	*a;

	len = ft_numlen(n, 1);
	sign = 0;
	num = (long)n;
	a = malloc((sizeof(char) * len) + 1);
	if (!a)
		return (0);
	a[len] = '\0';
	if (num < 0)
	{
		a[0] = '-';
		sign = 1;
		num = -num;
	}
	while (--len >= sign)
	{
		a[len] = '0' + (num % 10);
		num /= 10;
	}
	return (a);
}
