/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:52:01 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/15 00:44:38 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	str = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (str != NULL)
		{
			i = 0;
			while (s1[i] != '\0')
			{
				str[i] = s1[i];
				i++;
			}
			j = 0;
			while (s2[j] != '\0')
				str[i++] = s2[j++];
			str[i] = '\0';
		}
	}
	return (str);
}
