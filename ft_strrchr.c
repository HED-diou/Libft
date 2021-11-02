#include "libft.h"
#include <stdio.h>

char *ft_strrchr(char *str, char c)
{
	int i = 0;
	int index = 0;
	while(str[i])
	{
		if(str[i] == c)
			index = i;
		i++;
	}
	return &str[index + 1];

}
int main(){
// initializing variables
    char st[] = "GeeksforGeeks";
    char ch = 'e';
    char* val;
 
    // Use of strrchr()
    // returns "ks"
    val = ft_strrchr(st, ch);
 
    printf("String after last %c is :  %s \n", ch, val);
}
