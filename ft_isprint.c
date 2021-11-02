#include "libft.h"
#include <stdio.h>

int	ft_isprint(int arg)
{
	if (arg >= 32 && arg <= 127)
	{
		return (1);
	}
	return (0);
}
