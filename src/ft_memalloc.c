/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:09:50 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/06 15:07:30 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = NULL;
	if (size > 0)
	{
		ptr = malloc(size);
		if (ptr != NULL)
			ft_bzero(ptr, size);
	}
	return (ptr);
}
