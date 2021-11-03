#include <string.h>
#include <stdio.h>

char *ft_strnstr(char	*big,char *little, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    size_t tmp = 0;
    if(little == '\0' || len == 0)
        return big;
    while(big[i] && i < len)
    {
        j = 0;
        tmp = i;
        while(big[tmp] == little[j] && little[j] != '\0')
        {
            if(little[j + 1] == '\0')
                return &big[i];
            j++;
            tmp++;
        }
        i++;
    }
    return 0;
}

int main()
{
    char *t1 = "hamza";
    char *t2 = "z";
    
    printf("%s",strnstr(t1,t2,3));
    printf("\n");
    printf("%s",ft_strnstr(t1,t2,3));
}