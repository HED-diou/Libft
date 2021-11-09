/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:44:50 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:44:52 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char *s1, char *set)
{	
	int	i;
	int	k;
	int	j;
	int	x;
	char	*str;

	x = 0;
	j = 0;
	i = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	str = malloc(1 * i);
	while (is_in(set, s1[k]))
	{
		k++; // len start
	}
	while (is_in(set, s1[i - 1]))
	{
		i--;/*len end*/
	}
	while (k < i)
	{
		str[x] = s1[k];
		k++;
		x++;
	}
	return (str);
}

// int main()
// {
//     char *s1 = "bc";
//     char *set = "abc";

//     char *dest1 = ft_strtrim(s1,set);
//     //char dest2[20] = strtrim(s1,set);

//     printf(">%s\n", dest1);
// }
