/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:50:30 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:50:31 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d = (char*)dest;
    char *s = (char*)src;

    
    size_t i = 0;
    if(d == s)
        return dest;
    if (d > s)
    {
        while(n--)
            d[n] = s[n];
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    //dest = d;
    return dest;
}

// int main()
// {
//     char dest[] = "abcdef";
//     //char src[20] = "mimi";
//     memmove(dest+1,dest,3);

//     // char dest3[] = "abcde";
//     // //char src2[20] = "mimi";
//     // memcpy(dest3+1,dest3,3);

//     char dest2[] = "abcdef";
//     //char src2[20] = "mimi";
//     ft_memmove(dest2+1,dest2,3);

//     printf("mov >> %s \n",dest);
//     //printf("cpy >> %s \n",dest3);
//     printf("My func >> %s ",dest2);
// }
