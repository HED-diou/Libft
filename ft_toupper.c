#include <unistd.h>

void	ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 32);
	return c;
}

