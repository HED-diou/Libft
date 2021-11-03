#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = (char*)dest;
    char *s = (char*)src;

    size_t i = 0;
    if (s < d)
    {
        while(n--)
            d[n] = s[n];
    }
    else if (s > d)
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    dest = d;
    return dest;
}
/*
int main()
{
    char dest[20] = "hamza";
    char src[20] = "world";
    memmove(dest,src,2);

    char dest2[20] = "hamza";
    char src2[20] = "world";
    ft_memmove(dest2,src2,2);

    printf("DEST >> %s \nSRC >> %s",dest,src);
    printf("\n\nDEST2 >> %s \nSRC2 >> %s",dest2,src2);
}
*/