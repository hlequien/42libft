/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:17:58 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/11 04:54:44 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = NULL;
	str = (char *)ft_memalloc(sizeof(char) * (size + 1));
	if (str != NULL)
	{
		i = 0;
		while (i <= size)
			str[i++] = '\0';
	}
	return (str);
}
