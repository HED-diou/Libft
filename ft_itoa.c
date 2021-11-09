/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:51:27 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:51:29 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long nb)
{
	int	len;
	len = 0;
    if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int	i;

	i = len(n);
	unsigned int	j;
	char	*str;

	str = (char*)malloc(sizeof(char) * i);
    str[i] = '\0';
	i = i - 1;
	if(n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if(n < 0)
	{
		str[0] = '-';
		j = n * -1;
	}
	else
	{
		j = n;
	}
	while (j > 0)
	{
		str[i] = (j % 10) + '0';
		j = j / 10;
		i--;
	}
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(2147483649));
// 	return (0);
// }
