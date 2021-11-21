/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 19:23:09 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/15 19:23:10 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *c)
// {
//     free(c);
// }
// void *test(void *content)
// {
//     char *s;

//     s = ft_strdup((char *)content);

//     s[0] -= 32;
//     //*(char *)content = ;
//     return (s);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*tmp;

	newlist = NULL;
	while (lst)
	{
		tmp = ft_lstnew((f)(lst->content));
		if (!tmp)
			ft_lstclear(&newlist, (del));
		ft_lstadd_back(&newlist, tmp);
		lst = lst->next;
	}
	return (newlist);
}

// int main()
// {
//     t_list *node1 = ft_lstnew("f");
//     t_list *node2 = ft_lstnew("s");
//     t_list *node3 = ft_lstnew("t");
//     t_list *newList = NULL;

//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = NULL;

//     newList = ft_lstmap(node1, test, del);

//     while (newList)
//     {
//         printf("%s \n", (char *)newList -> content);
//         newList = newList -> next;
//     }
// }
