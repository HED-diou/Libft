#include <stdlib.h>
#include <stdio.h>
int ft_split(char const *s, char c)
{
    int i = 0;
    int j = 0;
    int max = 0;
    int end = 0;
    int spl = 0;
    while(s[i] != '\0')
    { 
        if(s[i] != c)
        {
            end++;
            if(end > max)
                max = end;
        }
        else
            end = 0;
        spl++;
        if(end > max)
        {
            if(s[i] == c || s[i+1] == '\0')
            {
                max = end;
                end = 0;
            }
        }
        i++;
    }
    return max;
}

int main ()
{
    char *x = "hellogrgdrgdrgdr ccc helloo";
    int y = ft_split(x,' ');
    printf("%d",y);

}