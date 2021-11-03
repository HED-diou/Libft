#include <unistd.h>
#include <stdio.h>
#include <string.h>


size_t    ft_strlcpy(char    *restrict dest, const char    *restrict src,size_t dstsize)
{
    size_t    i;
    size_t    j;

    i = 0;
    j = 0;
    if(dstsize > 0)
    {
        while (src[i] != '\0' && i <  dstsize - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i]=0;
    }
    while (src[j])
        j++;
    return (j);
}
/*
int main(void)
{
    char dest[20]="hello";
    char dest2[20]="hello";
    char src[20]="world";
    size_t i=ft_strlcpy(dest,src,4);
    size_t i2=strlcpy(dest2,src,4);
    printf("ft_strlcpy : %ld \n",i);
    printf(" ft_strlcpy : %s\n",dest);
    printf(" strclpy : %ld \n",i2);
    printf(" strlcpy : %s \n",dest2);
}
*/