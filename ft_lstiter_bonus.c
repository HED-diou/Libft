/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:22:52 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/15 19:22:57 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void test(void *str)
// {
//      int i = 0;
//      while (((char *)str)[i])
// 	 {
// 	 	((char *)str)[i++] -= 32;
// 	 }
// }

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// int main()
// {
//     t_list *node1 = NULL;
//     t_list *node2 = NULL;
//     t_list *node3 = NULL;

// 	char *str = ft_strdup("lwl");
// 	char *str1 = ft_strdup("tani");
// 	char *str2 = ft_strdup("talt");

// 	node1 = ft_lstnew(str);
// 	node2 = ft_lstnew(str1);
// 	node3 = ft_lstnew(str2);

//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = NULL;

//     ft_lstiter(node1, test);

// 	while (node1)
//     {
//         printf("%s\n", node1->content);
//         node1 = node1->next;
//     }
// }