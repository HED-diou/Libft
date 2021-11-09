/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:00:14 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 18:00:22 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void f( unsigned int x, char *c)
// {
//     int i;
//     i= 0;
//     while (c[i++])
//         c[i] = c[i] - 32;
// }
void    ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i = 0;
    while(s[i])
    {
        (*f)(i,&s[i]);
        i++;
    }
}
// int main()
// {
// 	char *y = "hello";
// 	ft_striteri(y,&f);
// 	printf("%s",y);
// }
