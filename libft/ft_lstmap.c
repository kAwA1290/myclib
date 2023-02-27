/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:58:52 by skawai            #+#    #+#             */
/*   Updated: 2022/12/03 00:59:03 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*list_top;

	list = NULL;
	if (lst != NULL)
	{
		list = ft_lstnew(f(lst->content));
		list_top = list;
		if (!list)
			return (NULL);
		lst = lst->next;
	}
	while (lst != NULL)
	{
		list->next = ft_lstnew(f(lst->content));
		if (!list->next)
		{
			ft_lstclear(&list_top, del);
			return (list);
		}
		list = list->next;
		lst = lst->next;
	}
	return (list_top);
}
