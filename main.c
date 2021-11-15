/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:00:22 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/02 19:02:30 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	printf("/* ************************************************************************** */\n/*                                                                            */\n/*              :::    ::: :::::::::: :::::::::                               */\n/*             :+:    :+: :+:        :+:    :+:                               */\n/*            +:+    +:+ +:+        +:+    +:+                                */\n/*           +#++:++#++ +#++:++#   +#+    +:+                                 */\n/*          +#+    +#+ +#+        +#+    +#+                                  */\n/*         #+#    #+# #+#        #+#    #+#                                   */\n/*        ###    ### ########## ######### - 01001000 01000101 01000100        */\n/*                                                                            */\n/* ************************************************************************** */\n\n\n");

// /*   ===   FT_ATOI   ===   */
// 	int a = ft_atoi("9223372036854775806");
// 	int b = atoi("9223372036854775806");
// 	printf(">>  %d \n<<  %d",a,b);

// /*   ===   FT_BZERO   ===   */
// 	char t[20] = "hello world";
// 	ft_bzero(t, 1);
// 	printf("%s",t);

// /*   ===   FT_CALLOC   ===   */
// 	char	*s;
// 	s = ft_calloc(5, sizeof(char));

// /*   ===   FT_ISPRINT   ===   */
// #include <ctype.h>
// 	int i;
// 	i = -1;
// 	while (i < 530)
// 	{
// 		if (!!ft_isprint(i) != !!isprint(i))
// 		{
// 			printf("false %d \n",i);
// 		}
// 		i++;
// 	}
// 	printf("true");

// /*   ===   FT_ITOA   ===   */
//ft_itoa(1337);
// 	//printf("%ld\n", ft_strlen(ft_itoa(1337)));

// /*   ===   FT_MEMCMP   ===   */
//  char *s1 = "test";
//  	char *s2 = "tEst";
//  	size_t size = 4;
//  printf("%d \n",memcmp(s1,s2,size));
// printf("%d \n",ft_memcmp(s1,s2,size));
//    char str1[15];
//    char str2[15];
//    int ret;
//    memcpy(str1, "abcdef", 6);
//    memcpy(str2, "ABCDEF", 6);
//    ret = memcmp(str1, str2, 5);
//    if(ret > 0) {
//       printf("str2 is less than str1");
//    } else if(ret < 0) {
//       printf("str1 is less than str2");
//    } else {
//       printf("str1 is equal to str2");
//    }

// /*   ===   FT_MEMCPY   ===   */
// ft_memcpy(((void *)0), ((void *)0), 3);
// char *dest = "/|\x12\xff\x09\0\x42\042\0\42|\\";
// char *src = "world";
// //memcpy(dest,dest,3);
// char *dest2 = "/|\x12\xff\x09\0\x42\042\0\42|\\";
// char *src2 = "world";
// //ft_memcpy(dest2,dest2,3);
// printf("DEST >> %s \n",memcpy(dest,'\0',12));
// printf("\n\nDEST2 >> %s",ft_memcpy(dest2,'\0',12));

// /*   ===   FT_MEMMOVE   ===   */
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

// /*   ===   FT_MEMSET   ===   */
// 	char t1[50] = "";
// 	char t2[50] = "";
// 	ft_memset(t1,'*',1);
// 	memset(t2,'*',1);
// 	printf("%s \n%s", t1,t2);

// /*   ===   FT_SPLIT   ===   */
//     char *s = "  hello   world    ";
//     char sp = ' ';
//     char **x = ft_split(s,sp);
//     int i = 0;int j = 0;
//     while( *x )
//     {
//         printf("%s\n",*x);
//         x++;
//     }

// /*   ===   FT_STRCHR   ===   */
// char t1[40] = "hello world";
// char ch = 'l';
// char *ptr1;
// char *ptr2;
// ptr1 = ft_strchr(t1,ch);
// ptr2 = strchr(t1,ch);
// printf("%s\n%s",ptr1,ptr2);

// /*   ===   FT_STRDUP   ===   */
//     char t1[10] = "ham777za";
//     char *tt = ft_strdup(t1);
//     printf("%s",tt);
//     return 0;

// /*   ===   FT_STRJOIN   ===   */
//     char *s1 = "lorem ipsum";
//     char *s2 = "helo";
// 	   s2[0] = '\0';
//     char *str = ft_strjoin(s1,s2);
//     printf("%s",str);

// /*   ===   FT_STRLCAT   ===   */
//     char *dest = NULL;
//     char src[20] = "world";
//     int x = strlcat(dest,src,0);
//     char *dest2 = NULL;
//     char src2[20] = "world";
//     int y = ft_strlcat(dest2,src2,0);
//     printf("DEST >> %s \nSRC >> %s",dest,src);
//     printf("\n%d",x);
//     printf("\n\nDEST2 >> %s \nSRC2 >> %s",dest2,src2);
//     printf("\n%d",y);

// /*   ===   FT_STRLCPY   ===   */
//     char dest[20]="hello";
//     char dest2[20]="hello";
//     char src[20]="world";
//     size_t i=ft_strlcpy(dest,src,4);
//     size_t i2=strlcpy(dest2,src,4);
//     printf("ft_strlcpy : %ld \n",i);
//     printf(" ft_strlcpy : %s\n",dest);
//     printf(" strclpy : %ld \n",i2);
//     printf(" strlcpy : %s \n",dest2);

// /*   ===   FT_STRNSTR   ===   */
//     printf("%s \n",ft_strnstr("aaabcabcd","cd",8));
//     printf("%s \n",strnstr("aaabcabcd","cd",8));

// /*   ===   FT_STRRCHR   ===   */
// 	   initializing variables
//     char st[] = "GeeksforGeeks";
//     char ch = 'e';
//     char* val;
//     // Use of strrchr()
//     // returns "ks"
//     val = ft_strrchr(st, ch);
//     printf("String after last %c is :  %s \n", ch, val);

	return (0);
}
