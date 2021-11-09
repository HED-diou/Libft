/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:45:47 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:45:49 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr( char *big, char *little, size_t len )
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	if (little == '\0' || len == 0)
		return (big);
	while (big[i] && i < len)
	{
		j = 0;
		tmp = i;
		while (big[tmp] == little[j] && little[j] != '\0')
		{
			if (little[j + 1] == '\0' && tmp < len)
				return (&big[i]);
			j++;
			tmp++;
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char *t1 = "hamza";
//     char *t2 = "z";
//     printf("%s",strnstr(t1,t2,3));
//     printf("\n");
//     printf("%s",ft_strnstr(t1,t2,3));
// }
// int main()
// {
//     printf("%s \n",ft_strnstr("aaabcabcd","cd",8));
//     printf("%s \n",strnstr("aaabcabcd","cd",8));
// }