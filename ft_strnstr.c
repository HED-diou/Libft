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

char	*ft_strnstr(const char *big, const char *little, size_t len )
{
	size_t	i;
	size_t	j;
	size_t	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		tmp = i;
		while (big[tmp] == little[j] && little[j] != '\0')
		{
			if (little[j + 1] == '\0' && tmp < len)
				return ((char *)&big[i]);
			j++;
			tmp++;
		}
		i++;
	}
	return (0);
}
