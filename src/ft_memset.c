/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:06:51 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/03 21:21:35 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	if (b != NULL)
	{
		i = 0;
		while (i < len)
			*((unsigned char *)b + i++) = (unsigned char)c;
	}
	return (b);
}
