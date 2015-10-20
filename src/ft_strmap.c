/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlequien <hlequien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 15:31:14 by hlequien          #+#    #+#             */
/*   Updated: 2014/11/06 15:17:21 by hlequien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*s2;

	s2 = NULL;
	if (s != NULL)
	{
		s2 = ft_strnew(ft_strlen(s) + 1);
		if (s2 != NULL)
		{
			i = 0;
			while (s[i] != '\0')
			{
				s2[i] = (*f)(s[i]);
				i++;
			}
		}
	}
	return (s2);
}
