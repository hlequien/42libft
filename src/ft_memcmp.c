/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:19:22 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/06 15:11:58 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	if (s1 != NULL && s2 != NULL)
	{
		i = 0;
		while (i < n && *((unsigned char *)s1 + i) == *((unsigned char *)s2
	+ i))
			i++;
		if (i == n)
			return (0);
		return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
	}
	return (0);
}
