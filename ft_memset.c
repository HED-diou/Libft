/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:42:49 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/02 18:56:49 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_memset(void *ss, int c, size_t n)
{
	size_t i = 0;
	char *s = (char*)ss;
	while (i < n)
	{
		s[i] = c;
		i++;
	}
	//ss = s;
	return ss;
}
/*
int main()
{
	char t1[50] = "hello world";
	char t2[50] = "hello world";
	ft_memset(t1,'*',3);
	memset(t2,'*',3);
	printf("%s \n%s", t1,t2);
}
*/
