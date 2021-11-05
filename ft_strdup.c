#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *t1)
{
    int n = 0;
    while(t1[n])
        n++;
    char *t2 = (char*)malloc(n * sizeof(char));
    if(t2 == NULL)
        return 0;
    int i = 0;
    while (t1[i])
    {
        t2[i] = t1[i];
        i++;
    }
    t2[i] = '\0';
    return t2;
}
// int main()
// {
//     char t1[10] = "ham777za";
//     char *tt = ft_strdup(t1);
//     printf("%s",tt);
//     return 0;
// }
