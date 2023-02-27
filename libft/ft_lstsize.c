/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:58:12 by skawai            #+#    #+#             */
/*   Updated: 2022/12/13 08:51:33 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	cnt;

	if (!lst)
		return (0);
	cnt = 1;
	while (lst->next)
	{
		cnt++;
		lst = lst->next;
	}
	return ((int)cnt);
}
