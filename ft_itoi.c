#include <stdio.h>
#include <string.h>

#include <stdlib.h>


static int len(long nb)
{
    int len = 0;
    if(nb < 0)
    {
        nb = nb * -1;
        len++;
    }
    while(nb > 0)
    {
        nb = nb / 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n)
{
    int i = 0;
    i = len(n);
    
    char *str = (char*)malloc(sizeof(char) * i);
    i = i - 1;
    str[i] = '\0';

    if(n == 0)
    {
        str[0] = '0';
        return str;
    }
    if(n < 0)
    {
        str[0] = '-';
        n = n * -1;
    }
    while (n > 0)
    {
        str[i] = (n % 10) + '0';
        n = n / 10;
        i--; 
    }
    return str;
}
int main(void)
{
        printf("%s\n", ft_itoa(-123156));
        return (0);
}
