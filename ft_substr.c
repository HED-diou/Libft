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
	unsigned int	l;
	char			*str;
	unsigned int	i;
	char			*ss;

	if (s)
	{
		l = (unsigned int) len;
		ss = (char *)s;
		i = 0;
		if (ft_strlen(ss) < start)
			return (ft_strdup(""));
		str = malloc((l + 1) * sizeof(char));
		if (!str)
			return (NULL);
		while (i < l && s[i] && start < ft_strlen(ss))
		{
			str[i] = s[start];
			i++;
			start++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
