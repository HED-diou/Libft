/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:40:06 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/02 18:40:10 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

void	ft_bzero(void *ss , size_t c)
{
	int i;
	char	*s;

	i = 0;
	*s = (char*)ss;
	while (i < c)
	{
		s[i] = '\0';
		i++;
	}
}

int main()
{
	char t[20] = "hello world";
	ft_bzero(t, 1);
	printf("%s",t);
}
