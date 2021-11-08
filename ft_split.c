/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:47:53 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:47:55 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int spl(char *s, char c)
{
    int i = 0;
    int spl = 0;
    if(s[0] != '\0' && s[0] != c)
        spl++;
    while(s[i])
    {
        while(s[i] == c)
             i++;
        if(s[i] != c && s[i-1] == c && s[i] != '\0')
        {
            spl++;
            while(s[i] != c && s[i])
                i++;
        }
        i++;
    }
    
    printf(" SPL :  %d \n" ,spl);
    return spl;
}


static int len(char *s,int i, char c)
{
    int len = 0;
    while(s[i] != c && s[i] != '\0')
    {
        i++;
        len++;
    }
    //printf(" LEN :  %d \n" ,len);
    return len;
}

char **ft_split(char *s, char c)
{
    int i = 0;
    int ii = 0;
    int l = 0; 
    int j = 0;
    int k = spl(s,c);
    char **cpy=(char**)malloc(sizeof(char*) * (k+1));
    while(i < k)
    {
        while (s[ii] == c)
            ii++;
        l = len(s,ii,c);
        cpy[i] = (char*)malloc(sizeof(char) * (l+1));
        j = 0;
        while(s[ii] != c && s[ii])
        {
            cpy[i][j] = s[ii];
            j++;
            ii++;
        }
        cpy[i][j] = '\0';
        i++;
        // if(s[ii] == '\0')
        //     break;
    }
    cpy[i]=NULL;
    return cpy;
}

int main(void)
{
    char *s = "hedf dsf sdf dslf jsdklfjdsklf jdlsfj lsdkfj sdf    ds sd";
    char sp = ' ';
    char **x = ft_split(s,sp);
    int i = 0;int j = 0;
    while( *x )
    {
        printf("%s\n",*x);
        x++;
    }

}


