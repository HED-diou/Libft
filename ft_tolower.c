#include "libft.h"

void	ft_tolower(char *str)
{
	int i = 0;
	while(str[i])
	{
		str[i] = str[i]+32;
		i++;
	}
}
