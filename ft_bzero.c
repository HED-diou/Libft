/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:40:06 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/02 18:40:10 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ss, size_t c)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)ss;
	while (i < c)
	{
		s[i] = '\0';
		i++;
	}
}
