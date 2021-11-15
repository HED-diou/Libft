#include "libft.h"  

t_list *ft_lstnew(void *content)
{
    t_list    *c;

    c = (t_list*)malloc(sizeof(t_list));
    if (!c)
        return (NULL);
    c->content = content;
    c->next = NULL;
    return (c);
}

// int main()  
// {  
//     t_list *s1 = ft_lstnew("hamza");
//     t_list *s2 = ft_lstnew("HED");
//     int dummy;  
//     s1->next = &s2;
//     s2->next = NULL;
//     printf("Printing the details....\n");  
//     printf("%s\n",s1->content);
//     printf("%s\n",s2->content); 
// } 