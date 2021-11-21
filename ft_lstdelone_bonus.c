/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:08:04 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/15 14:08:09 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void fun(void *head)
// {
//     //free(head);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		(del)(lst->content);
		free(lst);
	}
	lst = NULL;
}

// #include <stdio.h>
// int main()
// {
//     t_list    *head;
//     t_list    *node1;
// 	t_list    *node2;
//     t_list    *new;
// 	t_list	  *tmp;
// 	char *str2 = strdup("node2");
// 	char *str = strdup("node1");
//     head = ft_lstnew(str);
// 	node1 = ft_lstnew(str2);
// 	node2 = ft_lstnew("node3");
//     ft_lstadd_back(&head, node2);
// 	ft_lstadd_back(&head, node1);
// 	int x = ft_lstsize(head);
// 	printf("%d\n",x);
// 	//ft_lstdelone(head, fun);
// 	ft_lstclear(&head,fun);
// 	x = ft_lstsize(head);
// 	printf("%d\n",x);
// 	while (head)
//     {
//         printf("%s\n", head->content);
//         head = head->next;
//     }
// }