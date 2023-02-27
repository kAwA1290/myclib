/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 23:50:34 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 14:52:03 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoi_loop(int sign, long ans, char const *str)
{
	long	ld_div;
	long	ld_mod;

	ld_div = LONG_MAX / 10;
	ld_mod = LONG_MAX % 10;
	while (*str >= '0' && *str <= '9')
	{
		ans = 10 * ans + (*str++ - '0');
		if (ans > ld_div && *str >= '0' && *str <= '9')
		{
			if (sign < 0)
				return ((int)LONG_MIN);
			else
				return ((int)LONG_MAX);
		}
		else if (ans == ld_div)
		{
			if (sign < 0 && (*str - '0') > ld_mod + 1)
				return ((int)LONG_MIN);
			else if (sign > 0 && (*str - '0') > ld_mod)
				return ((int)LONG_MAX);
		}
	}
	return ((int)ans);
}

int	ft_atoi(char const *str)
{
	int	sign;
	int	ans;

	ans = 0;
	sign = 1;
	while ((9 <= *str && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	ans = atoi_loop(sign, (long)ans, str);
	return (ans * sign);
}
//#include <stdio.h>
//int	main(void) {
//	printf("str: 18446744073709551616\n");
//	printf("MAX: %ld\n", LONG_MAX);
//	printf("MAX: %ld\n", ULONG_MAX);
//	printf("casted longmax: %d\n", (int)LONG_MAX);
//	printf("casted longmin: %d\n", (int)LONG_MIN);
//	printf("%d\n", ft_atoi("1844674403337370955163316"));
//	//printf("%d\n", ft_atoi("-18446744033373709551616"));
//	//printf("%d\n", ft_atoi("1844674407370955161"));
//	//printf("%d\n", ft_atoi("184467440737095516"));
//	//printf("%d\n", ft_atoi("18446744073709551"));
//	//printf("%d", ft_atoi("1844674407370955"));
//	return (0);
//}
