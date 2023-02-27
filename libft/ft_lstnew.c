/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skawai <skawai@student.42.fr'>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 00:58:35 by skawai            #+#    #+#             */
/*   Updated: 2022/12/03 16:59:15 by skawai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlst;

	newlst = (t_list *)malloc(sizeof(t_list));
	if (!newlst)
		return (NULL);
	newlst->content = content;
	newlst->next = NULL;
	return (newlst);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	t_list	*mylst;
//	char	str[] = "hello, world";
//
//	mylst = (t_list *)malloc(sizeof(t_list));
//	mylst->content = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
//	ft_strlcpy(mylst->content, str, ft_strlen(str));
//	printf("%zu\n",sizeof(mylst->content));
//	free(mylst->content);
//	printf("%zu\n",sizeof(mylst->content));
//	printf("%s\n",(char *)mylst->content);
//	return (0);
//}
