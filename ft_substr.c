#include <stddef.h>
#include<stdio.h>
#include<stdlib.h>
//#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int l = (unsigned int) len;
    char *str = malloc(l * 1);
    
    unsigned int i = 0;
    while (i < l)
    {
        str[i] = s[start];
        i++;
        start++;
    }
    return str;
}

int main()
{
    char *x = "hello";
    char *y = ft_substr(x,0,2);
    printf("%s",y);
}