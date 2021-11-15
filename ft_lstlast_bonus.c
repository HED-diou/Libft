#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    while(lst->nex)
	{
        if(lst == NULL)
            return lst;
        lst = lst->next;
    }
    return (lst);
}