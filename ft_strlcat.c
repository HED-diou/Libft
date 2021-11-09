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

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	i;

	ls = 0;
	ld = 0;
	i = 0;
	while (src[ls])
		ls++;
	while (dest[ld])
		ld++;
	i = 0;
	if (size == 0)
		return (ls);
	while (src[i] && (ld + i) < (size - 1))
	{
		dest[ld + i] = src[i];
		i++;
	}
	dest[ld + i] = '\0';
	if (size >= ld)
		return (ld + ls);
	return (size + ls);
}
/*
int main()
{
    char dest[20] = "hamza";
    char src[20] = "world";
    int x = strlcat(dest,src,3);

    char dest2[20] = "hamza";
    char src2[20] = "world";
    int y = ft_strlcat(dest2,src2,3);

    printf("DEST >> %s \nSRC >> %s",dest,src);
    printf("\n%d",x);
    printf("\n\nDEST2 >> %s \nSRC2 >> %s",dest2,src2);
    printf("\n%d",y);
}
*/
