#include <stdio.h>
#include <string.h>

int ft_strncmp(char *str1, char *str2, size_t len)
{
    size_t i = 0;
    while (i < len && str1[i] && str2[i])
    {
        if(str1[i] != str2[i])
        {
            if(str1[i] != str2[i])
            {
                return str1[i] - str2[i];
            }
        }
        i++;
    }
    return 0;
}
/*
int main()
{
    char *str1 = "hello";
    char *str2 = "hello";
    size_t len = 2;

    int x = ft_strncmp(str1,str2,len);
       int y = strncmp(str1,str2,len);

    printf("> %d , >>> %d",x,y);

}
*/