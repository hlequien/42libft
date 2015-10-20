/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:46:26 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/07 22:05:04 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	s2 = NULL;
	if (s != NULL)
	{
		s2 = ft_strnew(len + 1);
		if (s2 != NULL)
		{
			s2[len] = '\0';
			while (len > 0)
			{
				len--;
				s2[len] = s[start + len];
			}
		}
	}
	return (s2);
}
