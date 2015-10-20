/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:33:57 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/09 18:56:30 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst != NULL && src != NULL && len != 0)
	{
		if (dst <= src)
			return (ft_memcpy(dst, src, len));
		while (len > 0)
		{
			len--;
			*(char *)(dst + len) = *(char *)(src + len);
		}
	}
	return (dst);
}
