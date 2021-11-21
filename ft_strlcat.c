/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:47:11 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:47:14 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	if ((!dest && !size) || !size)
		return (ft_strlen(src));
	ld = ft_strlen(dest);
	ls = ft_strlen(src);
	i = 0;
	if (size >= ld)
	{
		while (src[i] && (ld + i) < (size - 1))
		{
			dest[ld + i] = src[i];
			i++;
		}
		dest[ld + i] = '\0';
		return (ld + ls);
	}
	return (size + ls);
}
