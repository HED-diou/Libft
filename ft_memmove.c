#include <stdio.h>
#include <string.h>
#include <stddef.h>
//#include "libft.h"
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = (char*)dest;
    char *s = (char*)src;

    
    size_t i = 0;
    if (d > s)
    {
        while(n--)
            d[n] = s[n];
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    //dest = d;
    return dest;
}

int main()
{
    char dest[10] = "hellohello";
    char src[20] = "mimi";
    memmove(dest,src,3);

    char dest2[10] = "hellohello";
    char src2[20] = "mimi";
    ft_memmove(dest2,src2,3);

    printf("DEST >> %s \nSRC >> %s",dest,src);
    printf("\n\nDEST2 >> %s \nSRC2 >> %s",dest2, src2);
}
