/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:59:32 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/02 19:08:42 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*              :::    ::: :::::::::: :::::::::                               */
/*             :+:    :+: :+:        :+:    :+:                               */
/*            +:+    +:+ +:+        +:+    +:+                                */
/*           +#++:++#++ +#++:++#   +#+    +:+                                 */
/*          +#+    +#+ +#+        +#+    +#+                                  */
/*         #+#    #+# #+#        #+#    #+#                                   */
/*        ###    ### ########## ######### - 01001000 01000101 01000100        */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* ====      INCLUDES     ==== */

# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>

/* ====  functions Part 1 ==== */

/* ******************************************************************** */
/*                                                                      */
/*        :::::::::     :::     ::::::::: :::::::::::            :::    */
/*       :+:    :+:  :+: :+:   :+:    :+:    :+:              :+:+:     */
/*      +:+    +:+ +:+   +:+  +:+    +:+    +:+                +:+      */
/*     +#++:++#+ +#++:++#++: +#++:++#:     +#+                +#+       */
/*    +#+       +#+     +#+ +#+    +#+    +#+                +#+        */
/*   #+#       #+#     #+# #+#    #+#    #+#                #+#         */
/*  ###       ###     ### ###    ###    ###              #######        */
/*                                                                      */
/* ******************************************************************** */

int		ft_atoi(const char *c);

void	ft_bzero(void *ss, size_t c);

void	*ft_calloc(size_t n, size_t size);

int		ft_isalnum(int arg);

int		ft_isalpha(int chr);

int		ft_isascii(int arg);

int		ft_isdigit(int arg);

int		ft_isprint(int arg);

void	*ft_memchr( const void *str, int ch, size_t n );

int		ft_memcmp(const void *str1, const void *str2, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memset(void *ss, int c, size_t n);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);

size_t	ft_strlen(const char *str);

int		ft_strncmp(const char *str1, const char *str2, size_t len);

char	*ft_strnstr( const char *big, const char *little, size_t len );

char	*ft_strrchr(const char *str, int c);

char	*ft_strchr(char *str, int ch);

char	*ft_strdup(char *t1);

int		ft_tolower(int c);

int		ft_toupper(int c);

/* ************************************************************************	*/
/*               															*/
/*        :::::::::     :::     ::::::::: :::::::::::           :::::::: 	*/
/*       :+:    :+:  :+: :+:   :+:    :+:    :+:              :+:    :+: 	*/
/*      +:+    +:+ +:+   +:+  +:+    +:+    +:+                    +:+   	*/
/*     +#++:++#+ +#++:++#++: +#++:++#:     +#+                  +#+      	*/
/*    +#+       +#+     +#+ +#+    +#+    +#+                +#+         	*/
/*   #+#       #+#     #+# #+#    #+#    #+#               #+#           	*/
/*  ###       ###     ### ###    ###    ###              ##########      	*/
/*																			*/
/* ************************************************************************ */

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(const char *s1, const char *set);

char	**ft_split(const char *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int nb, int fd);

void	ft_putstr_fd(char *s, int fd);

/* ********************************************************************* */
/*                                                                       */
/*           :::::::::   ::::::::  ::::    ::: :::    :::  ::::::::      */
/*          :+:    :+: :+:    :+: :+:+:   :+: :+:    :+: :+:    :+:      */
/*         +:+    +:+ +:+    +:+ :+:+:+  +:+ +:+    +:+ +:+              */
/*        +#++:++#+  +#+    +:+ +#+ +:+ +#+ +#+    +:+ +#++:++#++        */
/*       +#+    +#+ +#+    +#+ +#+  +#+#+# +#+    +#+        +#+         */
/*      #+#    #+# #+#    #+# #+#   #+#+# #+#    #+# #+#    #+#          */
/*     #########   ########  ###    ####  ########   ########            */
/*                                                                       */
/* ********************************************************************* */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **alst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **alst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
