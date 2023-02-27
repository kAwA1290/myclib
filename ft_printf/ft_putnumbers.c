/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:05:14 by skawai            #+#    #+#             */
/*   Updated: 2023/02/10 21:05:15 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_putnbr(long num)
{
	int		cnt;
	char	c;

	cnt = 1;
	if (num < 0)
	{
		num *= -1;
		write(1, "-", 1);
		cnt++;
	}
	if (num >= 10)
		cnt += len_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
	return (cnt);
}

int	len_putnbr_unsigned(unsigned int num)
{
	int		cnt;
	char	c;

	cnt = 1;
	if (num >= 10)
		cnt += len_putnbr_unsigned(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
	return (cnt);
}

int	len_puthex(unsigned int num, const char *lst)
{
	int		cnt;

	cnt = 1;
	if (num >= 16)
		cnt += len_puthex(num / 16, lst);
	write(1, &lst[num % 16], 1);
	return (cnt);
}

int	len_putpointer(unsigned long long p, const char *lst)
{
	int	cnt;

	cnt = 1;
	if (p >= 16)
		cnt += len_putpointer(p / 16, lst);
	write(1, &lst[p % 16], 1);
	return (cnt);
}
