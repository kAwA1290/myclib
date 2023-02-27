/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:54:56 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 14:51:07 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	u;
	char	c;

	if (n < 0)
	{
		u = (long)n * -1;
		write(fd, "-", 1);
	}
	else
		u = (long)n;
	if (u > 9)
		ft_putnbr_fd(u / 10, fd);
	c = u % 10 + '0';
	write(fd, &c, 1);
	return ;
}
