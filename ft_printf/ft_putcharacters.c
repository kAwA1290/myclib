/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharacters.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:04:56 by skawai            #+#    #+#             */
/*   Updated: 2023/02/10 21:25:46 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_putchar(char const c)
{
	write(1, &c, 1);
	return (1);
}

int	len_putstr(char const *s)
{
	int	cnt;

	cnt = 0;
	if (!s)
		return (len_putstr("(null)"));
	while (*s)
	{
		write(1, s, 1);
		s++;
		cnt++;
	}
	return (cnt);
}
