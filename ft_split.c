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

#include "libft.h"

static int	spl(char *s, char c)
{
	int	i;
	int	spl;

	i = 0;
	spl = 0;
	if (s[0] != '\0' && s[0] != c)
		spl++;
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c && s[i] != '\0')
		{
			spl++;
			while (s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (spl);
}

static int	len(char *s, int i, char c)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static char	**engine(int k, char **cpy, char *s, char c)
{
	int	i;
	int	ii;
	int	l;
	int	j;

	i = 0;
	ii = 0;
	while (i < k && s[ii])
	{
		while (s[ii] == c)
			ii++;
		l = len(s, ii, c);
		cpy[i] = (char *)malloc(sizeof(char) * (l + 1));
		j = 0;
		while (s[ii] != c && s[ii])
		{
			cpy[i][j] = s[ii];
			j++;
			ii++;
		}
		cpy[i][j] = '\0';
		i++;
	}
	cpy[i] = NULL;
	return (cpy);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		k;
	char	**cpy;

	i = 0;
	if (s)
	{
		k = spl(s, c);
		cpy = (char **)malloc(sizeof(char *) * (k + 1));
		if (!cpy)
			return (NULL);
		return (engine(k, cpy, s, c));
		return (cpy);
	}
	return (0);
}
