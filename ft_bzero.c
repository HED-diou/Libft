#include <string.h>
#include <stdio.h>

void ft_bzero(void *ss , size_t c)
{
	size_t i = 0;
	char *s = (char*)ss;
	while(i < c)
	{
		s[i] = '\0';
		i++;
	}
}

int main()
{
	char *t = "hello world";
	ft_bzero(t+3, 1);
	printf("%s",t);
}
