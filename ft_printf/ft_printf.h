/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 09:54:04 by skawai            #+#    #+#             */
/*   Updated: 2023/02/10 21:39:38 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *s, ...);
int	len_putchar(char const c);
int	len_putstr(char const *s);
int	len_putnbr(long num);
int	len_putnbr_unsigned(unsigned int num);
int	len_puthex(unsigned int num, const char *lst);
int	len_putpointer(unsigned long long p, const char *lst);

#endif
