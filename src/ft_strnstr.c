/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:38:01 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/15 02:34:36 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;

	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		j = i;
		while (s1[j] == s2[j - i] && j < n && s1[j] != '\0')
		{
			if (s2[j - i + 1] == '\0')
				return ((char *)s1 + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
