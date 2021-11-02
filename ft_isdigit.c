#include "libft.h"
#include <stdio.h>
int	ft_isdigit(int	arg)
{
	if (arg >= 48 && arg <= 57)
	{
		return (1);
	}
	return (0);
}
