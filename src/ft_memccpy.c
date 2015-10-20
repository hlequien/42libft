/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:24:06 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/15 05:31:40 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- != 0)
	{
		*(unsigned char *)dst++ = *(unsigned char *)src++;
		if (*(unsigned char *)(dst - 1) == (unsigned char)c)
			return (dst);
	}
	return (NULL);
}
