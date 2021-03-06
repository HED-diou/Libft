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

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v'
		|| c == '\f' || c == '\r' || c == '\n')
	{
		return (1);
	}
	return (0);
}

static int	checkout(const char *c, int i, int x)
{
	long long			out;
	int					n;
	unsigned long long	max;

	n = 0;
	out = 0;
	max = 9223372036854775807;
	while (ft_isdigit(c[i]))
	{
		out = (out * 10) + (c[i] - '0');
		if ((unsigned long long)out > max && x == 1)
			return (-1);
		if ((unsigned long long)out > max && x == -1)
			return (0);
		i++;
		n++;
	}
	out = out * x;
	return (out);
}

static int	sing(char c)
{
	int	x;

	x = 1;
	if (c == '-' || c == '+')
	{
		if (c == '-')
			x = x * -1;
	}
	return (x);
}

int	ft_atoi(const char *c)
{
	int			i;
	int			x;
	long long	out;

	x = 1;
	i = 0;
	while (ft_isspace(c[i]))
		i++;
	if (c[i] == '-' || c[i] == '+')
	{
		x = sing(c[i]);
		i++;
	}
	out = checkout(c, i, x);
	return (out);
}
