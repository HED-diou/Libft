/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 14:08:25 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/15 14:08:27 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	tmp = *lst;
	if (!tmp)
		return ;
	if ((*lst) && del)
	{
		while (tmp)
		{
			*lst = tmp;
			ft_lstdelone((*lst), del);
			tmp = tmp -> next;
		}
	}
	*lst = NULL;
}
