/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:07:49 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/09 16:24:33 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;

	i = ft_strlen(dst);
	if (i >= size)
		return (ft_strlen(src) + size);
	ft_strncat(dst, src, size - i - 1);
	return (ft_strlen(src) + i);
}
