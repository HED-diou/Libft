#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(char *str, int ch)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == ch)
			return &str[i];
		i++;
	}
	if(ch == '\0')
		return &str[i];
	return 0;
}

int main()
{
	char t1[40] = "hello world";
	char ch = 'l';
	char *ptr1;
	char *ptr2;

	ptr1 = ft_strchr(t1,ch);
	ptr2 = strchr(t1,ch);

	printf("%s\n%s",ptr1,ptr2);
}
