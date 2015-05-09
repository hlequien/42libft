/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:30:16 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/14 01:36:09 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	if (s2[0] == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s1[j + i] == s2[j] && s1[j + i] != '\0')
		{
			j++;
			if (s2[j] == '\0')
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}
