#include "libft.h"
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
/*
int main()
{
    char dest[20] = "hamza";
    char src[20] = "world";
    memcpy(dest,src,2);

    char dest2[20] = "hamza";
    char src2[20] = "world";
    ft_memcpy(dest2,src2,2);

    printf("DEST >> %s \nSRC >> %s",dest,src);
    printf("\n\nDEST2 >> %s \nSRC2 >> %s",dest2,src2);
}
*/