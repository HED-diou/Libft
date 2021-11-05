#include <stdio.h>
#include <stdlib.h>

static int is_in(char *str, char c)// doesn't work
{
    int i = 0;
    while (str[i])
    {
        if(str[i] == c);
            return 1;
        i++;
    }
    return 0;
}

char *ft_strtrim(char *s1, char *set)
{
    int i = 0;
    int k = 0;
    int j = 0;
    int x = 0;
    while(s1[i] != '\0')
        i++; // len
    
    char *str = malloc(1 * i);
    
    while(is_in(set,s1[k]))
    {
        k++; // len start
    }
    while (is_in(set,s1[i-1]))
    {
        i--; // len end
    }
    while (k < i)
    {
        str[x] = s1[k];
        k++;
        x++;
    }
    
    return str;
}

int main()
{
    char *s1 = "youba bensguia ayoub";
    char *set = "ayoub";

    char *dest1 = ft_strtrim(s1,set);
    //char dest2[20] = strtrim(s1,set);

    printf(">%s\n", dest1);
}