/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:50:43 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:50:44 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i = 0;
    unsigned char *d = (unsigned char*)dest;
    unsigned char *s = (unsigned char*)src;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    
    dest = d;// no need
    return dest;
}

// int main()
// {
//     char dest[6] = "123456";
//     char src[5] = "world";
//     memcpy(dest,dest,3);

//     char dest2[6] = "123456";
//     char src2[5] = "world";
//     ft_memcpy(dest2,dest2,3);

//     printf("DEST >> %s \n",memcpy(dest,dest,3));
//     printf("\n\nDEST2 >> %s",ft_memcpy(dest2,dest2,3));
// }
