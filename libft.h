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

#ifndef lib
#define lib

// ====  Part 1 functions  ====

int ft_atoi(char *c);
void ft_bzero(void *ss , size_t c);
int	ft_isalnum(int arg);
int	ft_isalpha(int chr);
int	ft_isascii(int arg);
int	ft_isdigit(int	arg);
int	ft_isprint(int arg);
void *ft_memset(void *ss, int c, size_t n);
char *ft_strchr(char *str, int ch);
size_t	ft_strlen(char *str);
char *ft_strrchr(char *str, char c);
void	ft_tolower(char *str);
void	ft_toupper(int c);

#endif
