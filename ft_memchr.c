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

void    *ft_memchr( const void *str, int ch, size_t n )
{
    char    *s;                    					 
    size_t  i;
    size_t  j;
    
    s = (char*)str;
    i = 0;
    j = 0;
    while (i < n && s[i])
    {
        if(ch == s[i])
            return s+i;
        i++;
    }
    return 0;
}
/*
#include<stdio.h>
int main()
{
   //initializing character pointer
   const char *str = "hmaza";
   const char ch = 'z';

   //displaying str
   printf("str = %s\n\n", str);

   printf(" '%c' : %s\n", ch, (char *) memchr( str, ch, 3));
   printf(" '%c' : %s\n", ch, (char *) ft_memchr( str, ch, 3));

   return 0;
}//end
*/
