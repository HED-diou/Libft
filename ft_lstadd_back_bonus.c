#include "libft.h"

void    ft_lstadd_back(t_list **alst, t_list *new)
{
    t_list *l;

    if (*alst)
    {
        l = ft_lstlast(*alst)
        last->next = new;
    }
    else
    {
        *alst = new;
    }
}