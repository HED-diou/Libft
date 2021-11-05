//#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    char *d = (char*)dest;
    char *s = (char*)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    
    dest = d;// no need
    return dest;
}

int main()
{
    char *dest = "abcde";
    //char src[20] = "world";
    memcpy(dest,dest,3);

    char *dest2 = "abcde";
    //char src2[20] = "world";
    ft_memcpy(dest2,dest2,3);

    printf("DEST >> %s \n",memcpy(dest,dest,3));
    printf("\n\nDEST2 >> %s",ft_memcpy(dest2,dest2,3));
}
