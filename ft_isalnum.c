
#include "libft.h"
#include <stdio.h>
int	ft_isalnum(int arg)
{
	if ((arg >= 48 && arg <= 57) 
			|| (arg >= 65 && arg <= 90)
			|| (arg >= 97 && arg <= 122))
	{
		return (1);
	}
	return (0);
}
