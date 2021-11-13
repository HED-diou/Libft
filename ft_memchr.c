/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:51:13 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:51:14 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	char	*s;
	size_t	i;
	size_t	j;

	s = (char *)str;
	i = 0;
	j = 0;
	while (i < n)
	{
		if (ch == s[i])
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
