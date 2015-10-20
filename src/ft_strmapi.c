/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:38:43 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/06 15:18:01 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s2;

	s2 = NULL;
	if (s != NULL)
	{
		s2 = ft_strnew(ft_strlen(s));
		if (s2 != NULL)
		{
			i = 0;
			while (s[i] != '\0')
			{
				s2[i] = (*f)(i, s[i]);
				i++;
			}
		}
	}
	return (s2);
}
