/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hed-diou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:41:07 by hed-diou          #+#    #+#             */
/*   Updated: 2021/11/02 18:41:12 by hed-diou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int chr)
{
	if ((chr >= 65 && chr <= 90) || (chr >= 97 && chr <= 122))
	{
		return (1);
	}
	return (0);
}
