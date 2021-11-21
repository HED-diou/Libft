/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:07:01 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/15 14:07:03 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

t_list	*ft_lstnew(void *content)
{
	t_list	*c;

	c = (t_list *)malloc(sizeof(t_list));
	if (!c)
		return (NULL);
	c->content = content;
	c->next = NULL;
	return (c);
}

// void del(void *content)
// {
//     content = ft_strdup("");
// }
// #include <stdio.h>
// int main()
// {
//     t_list    *head;
//     t_list    *node1;
// 	t_list    *node2;
//     t_list    *new;
// 	t_list	  *tmp;
//     head = ft_lstnew("head");
//     node1 = ft_lstnew("node1");
//     ft_lstadd_back(&head, node1);
//     // node1 = ft_lstnew("node 1");
// 	// node2 = ft_lstnew("node 2");
//     // new = ft_lstnew("new");
// 	// tmp = head;
//     //head->next = node1;
// 	//ft_lstadd_back(&head, node1);
// 	// ft_lstadd_front(&head, node2);
//     // ft_lstadd_back(&head, new);
// 	// printf("%d\n",ft_lstsize(head));
//     // while (head)
//     // {
//     //     printf("%s\n", head->content);
//     //     head = head->next;
//     // }
// 	// printf("\n\n\n");
// 	ft_lstdelone(head, del);
// //	ft_lstiter(new,(f)(new->content));
// // 	head = tmp;
// // 	while (head)
// //     {
// //         printf("%s\n", head->content);
// //         head = head->next;
// //     }
// }