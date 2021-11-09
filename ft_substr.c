/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:44:32 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:44:37 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	l;
	char	*str;
	unsigned int	i = 0;

	l = (unsigned int) len;
	str = malloc(l * 1);
	while (i < l)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}

// int main()
// {
//     char *x = "hello";
//     char *y = ft_substr(x,0,2);
//     printf("%s",y);
// }
