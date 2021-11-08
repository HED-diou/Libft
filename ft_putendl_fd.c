/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:50:13 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:50:15 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putendl_fd(char *s,int fd)
{
    int i = 0;
    while (s[i])
        write(fd,&s[i++],1);
    write(fd,'\n',1);
    
}

int main()
{
   ft_putendl_fd("hello world",1);
}
