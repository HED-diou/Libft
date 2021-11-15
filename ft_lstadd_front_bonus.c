#include "libft.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
    if(*alst)
        new->next = *alst;
    *alst = new;
}
// int main()  
// {  
//     t_list s1,s2;  
//     int dummy;  

//     s1.content = "hamza";
//     s1.next = &s2;
//     s2.content = "hed";
//     s2.next = NULL;


//     printf("Printing the details....\n");  
//     printf("%s\n",s1.content);
//     printf("%s\n",s2.content); 

// } 