/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:39:21 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/02 18:39:53 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_atoi(char *c)
{
	int i = 0;
	int x = 1;
	int out = 0;
	while(c[i] == ' ' ||c[i] == '	')
		i++;
	if(c[i] == '-' || c[i] == '+')
	{
		if(c[i] == '-')
			x = x * -1;
		i++;
	}
	while(c[i] >= '0' && c[i] <= '9')
	{
		out = (out * 10) + (c[i] - '0');
		i++;
	}
	out = out * x;
	return out;

}
/*
int main()
{
	int a = ft_atoi("  - 552");
	int b = atoi("  - 552");
	printf(">>  %d \n<<  %d",a,b);
}*/
