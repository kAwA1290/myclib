/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:59:48 by skawai            #+#    #+#             */
/*   Updated: 2022/12/05 21:29:07 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	recursive_clear(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		recursive_clear(lst->next, del);
		ft_lstdelone(lst, del);
	}
	return ;
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	recursive_clear(*lst, del);
	*lst = NULL;
	return ;
}

//void	ft_lstclear(t_list **lst, void (*del)(void*))
//{
//	t_list	*lstptr_prev;
//
//	if (!del || !(*lst))
//		return ;
//	lstptr_prev = NULL;
//	while ((*lst) != NULL)
//	{
//		ft_lstdelone(*lst, del);
//		lstptr_prev = *lst;
//		*lst = (*lst)->next;
//		free(lstptr_prev);
//	}
//	*lst = NULL;
//	return ;
//}

// void testfunc(void *d)
// {
// 	printf("test");
// 	free(d);
// 	return ;
// }

// int	main(void)
// {
// 	t_list *l = ft_lstnew(ft_strdup("hello,world"));
// 	l->next = ft_lstnew(ft_strdup("hell,world"));
// 	ft_lstclear(&l, &testfunc);
// 	//printf("%s", (char *)l->content);
// 	printf("%p", l);
// 	return (0);
// }
