#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
char *ft_strjoin(char const *s1, char const *s2)
{
    int i=0;int j =0;
    while(s1[i])
        i++;
    while (s2[j])
        j++;
    char *str = malloc(i+j);
    i = j = 0;
    while(s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while(s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    return str;
}

int main()
{
    char *s1 = "hello ";
    char *s2 = "world";
    char *str = ft_strjoin(s1,s2);
    printf("%s",str);
}