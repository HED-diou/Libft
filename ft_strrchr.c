/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:58:06 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/02 18:58:38 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strrchr(char *str, char c)
{
	int i = 0;
	int index = 0;
	while(str[i])
	{
		if(str[i] == c)
			index = i;
		i++;
	}
	return &str[index + 1];

}
/*
int main(){
// initializing variables
    char st[] = "GeeksforGeeks";
    char ch = 'e';
    char* val;
 
    // Use of strrchr()
    // returns "ks"
    val = ft_strrchr(st, ch);
 
    printf("String after last %c is :  %s \n", ch, val);
}
*/
