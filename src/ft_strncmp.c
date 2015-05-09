/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:48:14 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/07 23:56:08 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while ((char)s1[i] == (char)s2[i] && s1[i]
	!= '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i == n)
		return (0);
	return ((char)s1[i] - (char)s2[i]);
}
