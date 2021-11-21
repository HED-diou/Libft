/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:44:32 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 17:44:37 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	a;
	char			*p;

	a = 0;
	if (!s)
		return (0);
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	if (*s == 0 || len == 0)
	{
		p[a] = 0;
		return (p);
	}
	while (s[start] && a < len && start <= ft_strlen(s))
	{
		p[a] = s[start];
		a++;
		start++;
	}
	p[a] = '\0';
	return (p);
}
