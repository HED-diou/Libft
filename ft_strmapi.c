/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:46:11 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:46:31 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	f( unsigned int x, char c)
// {
//   return (c - x);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	i = 0;
	str = (char*)malloc(sizeof(char) * i);
	while (s[i])
	{
		str[i] = (*f)(32,s[i]);
		i++;
	}
	return (str);
}
// int main()
// {
// 	char *y = "hello";
// 	char *x = ft_strmapi(y,f);
// 	printf("%s",x);
// }
