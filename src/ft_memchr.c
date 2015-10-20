/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:14:30 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/07 16:34:45 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;

	if (s != NULL && n != 0)
	{
		i = 0;
		while (i < n)
		{
			if (*((unsigned char *)s + i) == (unsigned char)c)
				return ((void *)s + i);
			i++;
		}
	}
	return (NULL);
}
