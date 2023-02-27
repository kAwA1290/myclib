/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:56:37 by skawai            #+#    #+#             */
/*   Updated: 2023/02/10 21:39:15 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	flag_handler(const char c, va_list ap)
{
	int	cnt;

	cnt = 0;
	if (c == 'c')
		cnt += len_putchar(va_arg(ap, int));
	else if (c == 's')
		cnt += len_putstr(va_arg(ap, char const *));
	else if (c == 'p')
	{
		cnt += len_putstr("0x");
		cnt += len_putpointer((unsigned long long)va_arg(ap, void *), \
				"0123456789abcdef");
	}
	else if (c == 'd' || c == 'i')
		cnt += len_putnbr((long)va_arg(ap, int));
	else if (c == 'u')
		cnt += len_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (c == 'x')
		cnt += len_puthex(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		cnt += len_puthex(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		cnt += len_putchar('%');
	return (cnt);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		cnt;

	cnt = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
			cnt += flag_handler(*(s++ + 1), ap);
		else
			cnt += len_putchar(*s);
		s++;
	}
	va_end(ap);
	return (cnt);
}
