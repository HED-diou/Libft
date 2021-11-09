/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:30:53 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/08 18:30:55 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	if(n == 0 || size == 0 )
	{
		return (0);
	}
	void	*ptr;

	ptr = malloc(n * size);
	ft_bzero(ptr, n);
	return (ptr);
}

// int	main()
// {
// 	char	*s;
// 	s = ft_calloc(5, sizeof(char));
// 	return (0);
// }
